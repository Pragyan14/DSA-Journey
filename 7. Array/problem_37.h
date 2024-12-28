#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_37_H
#define PROBLEM_37_H

// https://leetcode.com/problems/maximum-product-subarray/description/

class problem_37 {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN, pre = 1, suf = 1,n = nums.size();
        for(int i=0;i<n;i++){
            if(pre == 0) pre = 1;
            if(suf == 0) suf = 1;
            pre = pre * nums[i];
            suf = suf * nums[n-i-1];
            maxi = max(maxi,max(pre,suf));
        }
        return maxi;
    }
};

#endif //PROBLEM_37_H
