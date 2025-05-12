#include <bits/stdc++.h>
using namespace std;

void solve(int row,int col,int n,int m,vector<vector<int>>& heights,vector<vector<int>>& ans,vector<int>& move,vector<vector<int>>& vis){

    if(row == m-1 && col == n-1){
        ans.push_back(move);
        return;
    }

    vis[row][col] = 1;

    // downwards
    if(row+1 < m && !vis[row+1][col]){
        move.push_back(heights[row+1][col]);
        solve(row+1,col,n,m,heights,ans,move,vis);
        move.pop_back();
    }

    // leftwards
    if(col-1 >= 0 && !vis[row][col-1]){
        move.push_back(heights[row][col-1]);
        solve(row,col-1,n,m,heights,ans,move,vis);
        move.pop_back();
    }

    // rightward
    if(col+1 < n && !vis[row][col+1]){
        move.push_back(heights[row][col+1]);
        solve(row,col+1,n,m,heights,ans,move,vis);
        move.pop_back();
    }

    // upward
    if(row-1 >= 0 && !vis[row-1][col]){
        move.push_back(heights[row-1][col]);
        solve(row-1,col,n,m,heights,ans,move,vis);
        move.pop_back();
    }

    vis[row][col] = 0;
}

int main() {
    vector<vector<int>> heights = {{1,2,2},{3,8,2},{5,3,5}};
    int row = heights.size();
    int col = heights[0].size();
    vector<vector<int>> ans;
    vector<vector<int>> vis(row,vector<int> (col,0));
    vector<int> move;
    move.push_back(heights[0][0]);
    solve(0,0,col,row,heights,ans,move,vis);
    int cnt = 1;
    if (!ans.empty()) {
        for (int i = 0; i < ans.size(); i++) {
            cout<<cnt++<<" ";
            for (int j = 0; j < ans[i].size(); j++) {
                cout<<ans[i][j]<<" ";
            }
            cout << endl;
        }
    }
    // cout<<ans.size();
}