#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_22_H
#define PROBLEM_22_H

// https://leetcode.com/problems/rotate-image/

class problem_22 {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int ans[n][n];
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                ans[j][n-1-i] = matrix[i][j];
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                cout<<ans[i][j]<<" ";
            }
        }
    }

    void rotateOptimal(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // O(n/2 * n/2)
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // O(n * n/2)
        for(int i=0;i<n;i++) {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

#endif //PROBLEM_22_H
