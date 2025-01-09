#include<bits/stdc++.h>
using namespace std;

#ifndef B17_AGGRESSIVECOWS_H
#define B17_AGGRESSIVECOWS_H

// https://www.naukri.com/code360/problems/aggressive-cows_1082559

class B17 {
public:
    bool canPlace(vector<int> arr,int diff,int cows) {
        int cowCnt = 1,last = arr[0];
        for(int i = 1;i<arr.size();i++) {
            if(arr[i] - last >= diff) {
                cowCnt++;
                last = arr[i];
            }
            if(cowCnt >= cows) return true;
        }
        return false;
    }
    
    int aggressiveCows(vector<int> &stalls, int k)
    {
        sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int low = 1,high = stalls[n - 1] - stalls[0];
        while(low <= high) {
            int mid = (low + high) / 2;
            if(canPlace(stalls,mid,k)) low = mid + 1;
            else high = mid - 1;
        }
        return high;
    }


};

#endif //B17_AGGRESSIVECOWS_H
