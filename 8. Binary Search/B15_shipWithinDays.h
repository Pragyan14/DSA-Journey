#include<bits/stdc++.h>
using namespace std;

#ifndef B15_SHIPWITHINDAYS_H
#define B15_SHIPWITHINDAYS_H

class B15 {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end()),high = accumulate(weights.begin(),weights.end(),0);
        while(low <= high) {
            int mid = (low + high) / 2;
            int daysTaken = daysRequred(weights,mid);
            if(daysTaken <= days) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }

    int daysRequred(vector<int> wt,int cap) {
        int day = 1, load = 0, n = wt.size();
        for(int i=0;i<n;i++) {
            if(load + wt[i] > cap) {
                day++;
                load = wt[i];
            }
            else load += wt[i];
        }
        return day;
    }
};

#endif //B15_SHIPWITHINDAYS_H
