#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_25_H
#define PROBLEM_25_H

// https://leetcode.com/problems/pascals-triangle/description/

class problem_25 {
public:
    vector<vector<int>> generate(int numRows) {
        
    }
    void getRow(int rowIndex) {
        vector<int> ans;
        if(rowIndex == 0){
            ans.push_back(1);
        }
        else {
            for(int i=0;i<=rowIndex;i++) {
                ans.push_back(val(rowIndex,i));
            }
        }
        for(auto it:ans) {
                cout<<it<<" ";
            }
    }
    int val(int n,int r) {
        int res = 1;
        for(int i=0;i<r;i++) {
            res = res * (n-i);
            res = res / (i+1);
        }
        return res;
    }
};

#endif //PROBLEM_25_H
