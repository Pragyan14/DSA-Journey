#include<bits/stdc++.h>
using namespace std;

#ifndef B16_FINDKTHPOSITIVE_H
#define B16_FINDKTHPOSITIVE_H

// https://leetcode.com/problems/kth-missing-positive-number/

class B16 {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0, high = n - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            int missing = arr[mid] - (mid + 1);
            if(missing < k) low = mid + 1;
            else high = mid - 1;
        }

        return low + k;
    }
};

#endif //B16_FINDKTHPOSITIVE_H
