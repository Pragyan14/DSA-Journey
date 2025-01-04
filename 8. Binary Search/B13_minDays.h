#include<bits/stdc++.h>
using namespace std;

#ifndef B13_MINDAYS_H
#define B13_MINDAYS_H

// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

class B13 {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k > n) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end()), high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low <= high) {
            int mid = (low+high) / 2;
            bool isPossible = possible(bloomDay,mid,m,k,n);
            if(isPossible) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }

    bool possible(vector<int> arr,int day,int m,int k, int n) {
        int cnt = 0,noOfBouq = 0;
        for(int i=0;i<n;i++) {
            if(arr[i] <= day) cnt++;
            else {
                noOfBouq += cnt / k;
                cnt = 0;
            }
        }
        noOfBouq += cnt / k;
        if(noOfBouq >= m) return true;
        return false;
    }
};

#endif //B13_MINDAYS_H
