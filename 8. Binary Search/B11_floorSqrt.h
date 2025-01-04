#include<bits/stdc++.h>
using namespace std;

#ifndef B11_FLOORSQRT_H
#define B11_FLOORSQRT_H

class B11 {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        int low = 1,high = x;
        while(low <= high) {
            long long mid = ((long long)low + (long long)high) / 2;
            long long temp = mid * mid;
            if(temp <= x) low = mid + 1;
            else high = mid - 1;
        }
        return high;
    }
};

#endif //B11_FLOORSQRT_H
