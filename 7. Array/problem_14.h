#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_14_H
#define PROBLEM_14_H

// https://leetcode.com/problems/maximum-subarray/

class problem_14 {
public:
    // BRUTE / BETTER   TC = O(n^2)
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum += nums[j];
                maxi = max(sum,maxi);
            }
        }
        return maxi;
    }


    // OPTIMAL   TC = O(n)
    int maxSubArray2(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int num: nums){
            sum += num;
            maxi = max(sum,maxi);
            if(sum < 0) sum = 0;
        }
        return maxi;
    }
};

#endif //PROBLEM_14_H
