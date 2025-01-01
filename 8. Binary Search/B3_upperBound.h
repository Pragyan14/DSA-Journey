#include<bits/stdc++.h>
using namespace std;

#ifndef B3_UPPERBOUND_H
#define B3_UPPERBOUND_H

// https://www.naukri.com/code360/problems/implement-upper-bound_8165383

class B3 {
public:
    int upperBound(vector<int> &arr, int x, int n){
        int low = 0,high = n - 1, ans = n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] > x){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};

#endif //B3_UPPERBOUND_H
