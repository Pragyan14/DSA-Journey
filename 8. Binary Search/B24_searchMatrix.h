#include<bits/stdc++.h>
using namespace std;

#ifndef B24_SEARCHMATRIX_H
#define B24_SEARCHMATRIX_H

// https://leetcode.com/problems/search-a-2d-matrix-ii/

class B24 {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int row = 0, col = m - 1;
        while(row < n && col >= 0) {
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) row++;
            else col--;
        }
        return false;
    }
};

#endif //B24_SEARCHMATRIX_H
