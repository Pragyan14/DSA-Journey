#include<bits/stdc++.h>
using namespace std;

#ifndef B2_LOWERBOUND_H
#define B2_LOWERBOUND_H

class B2 {
public:
    int lowerBound(vector<int> arr,int x,int n) {
        int ans = n,low = 0,high = n - 1;
        while(low<=high) {
            int mid = (low + high) / 2;
            if(arr[mid] >= x) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};

#endif //B2_LOWERBOUND_H
