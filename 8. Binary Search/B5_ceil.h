#include<bits/stdc++.h>
using namespace std;

#ifndef B5_CEIL_H
#define B5_CEIL_H

class B5 {
public:
    int getCeil(vector<int> arr,int x,int n) {
        int low = 0,high = n - 1,ceil = -1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] >= x) {
                ceil = arr[mid];
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ceil;
    }
};

#endif //B5_CEIL_H
