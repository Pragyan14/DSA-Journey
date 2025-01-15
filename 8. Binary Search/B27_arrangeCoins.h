#include<bits/stdc++.h>
using namespace std;

#ifndef B27_ARRANGECOINS_H
#define B27_ARRANGECOINS_H

// https://leetcode.com/problems/arranging-coins/

class B27 {
    int arrangeCoins(int n) {
        int low = 1, high = n;
        while(low <= high) {
            int mid = ((long long)low + high) / 2;
            int val = (mid * (mid + 1)) / 2;
            if(val <= n) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};



#endif //B27_ARRANGECOINS_H
