#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_21_H
#define PROBLEM_21_H

// https://leetcode.com/problems/set-matrix-zeroes/submissions/1449728722/

class problem_21 {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n,0);
        vector<int> col(m,0);
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(row[i] || col[j]) {
                    matrix[i][j] = 0;                }
            }
        }
    }
};

#endif //PROBLEM_21_H
