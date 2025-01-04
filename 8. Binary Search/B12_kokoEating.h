#include<bits/stdc++.h>
using namespace std;

#ifndef B12_KOKOEATING_H
#define B12_KOKOEATING_H

// https://leetcode.com/problems/koko-eating-bananas/

class B12 {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1,high = *max_element(piles.begin(),piles.end());
        while (low<=high) {
            int mid = (low + high) / 2;
            int totalHrs = hoursReq(piles,mid,n);
            if(totalHrs <= h) {
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }

    int hoursReq(vector<int> arr,int hourly,int n) {
        int hours = 0;
        for(int i=0;i<n;i++) {
             hours += (arr[i] + hourly - 1) / hourly;
        }
        return hours;
    }
};

#endif //B12_KOKOEATING_H
