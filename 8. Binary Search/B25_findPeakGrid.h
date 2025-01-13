#include<bits/stdc++.h>
using namespace std;

#ifndef B25_FINDPEAKGRID_H
#define B25_FINDPEAKGRID_H

// https://leetcode.com/problems/find-a-peak-element-ii/

class B25 {
public:
        vector<int> findPeakGrid(vector<vector<int>>& mat) {
            int n = mat[0].size();
            int low = 0, high = n - 1;
            while(low <= high) {
                int mid = (low + high) / 2;
                int maxRowIndex = colPeak(mat,mid);
                int left = mid - 1 >= 0 ? mat[maxRowIndex][mid - 1] : -1;
                int right = mid + 1 < n ? mat[maxRowIndex][mid + 1] : -1;
                if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right) return {maxRowIndex,mid};
                else if(mat[maxRowIndex][mid] < left) high = mid - 1;
                else low = mid + 1;
            }
            return {-1,-1};
        }

        int colPeak(vector<vector<int>> arr,int col) {
            int ans = -1, index = -1;
            for(int i=0;i<arr.size();i++) {
                if(arr[i][col] > ans) {
                    ans = arr[i][col];
                    index = i;
                };
            }
            return index;
        }
};

#endif //B25_FINDPEAKGRID_H
