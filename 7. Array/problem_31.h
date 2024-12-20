#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_31_H
#define PROBLEM_31_H

// https://www.interviewbit.com/problems/subarray-with-given-xor/

class problem_31 {
public:
    int subarraysWithSumK(vector < int > a, int k) {
        int xr = 0;
        map<int,int> mpp;
        mpp[xr]++;
        int cnt = 0;
        for(int i=0;i<a.size();i++) {
            xr = xr ^ a[i];
            int x = xr ^ k;
            cnt += mpp[x];
            mpp[xr]++;
        }
        return cnt;
    }
};

#endif //PROBLEM_31_H
