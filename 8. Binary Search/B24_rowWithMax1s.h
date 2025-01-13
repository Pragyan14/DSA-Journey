#include<bits/stdc++.h>
using namespace std;

#ifndef B24_ROWWITHMAX1S_H
#define B24_ROWWITHMAX1S_H

// https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

class B24 {
public:
    int lowerBound(vector<int> arr,int x) {
        int n = arr.size();
        int low = 0,high = n - 1,ans = n;

        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] >= x) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        return ans;
    }
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n = arr.size(),cnt_max = 0,inx = -1,m = arr[0].size();
        for(int i=0;i<n;i++) {
            int cnt_ones = m - lowerBound(arr[i],1);
            if(cnt_ones > cnt_max) {
                cnt_max = cnt_ones;
                inx = i;
            }
        }
        return inx;
    }
};

#endif //B24_ROWWITHMAX1S_H
