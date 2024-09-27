#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_10_H
#define PROBLEM_10_H

// https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399

class problem_10 {
public:
    //  TC = O(2n)
    int longestSubarrayWithSumK(vector<int> arr, long long k) {
        int right=0,left=0,maxLen=0,n=arr.size();
        long long sum = arr[0];
        while(right < n){
            while(left<right && sum > k){
                sum -= arr[left];
                left++;
            }
            if(sum == k){
                maxLen = max(maxLen,right-left+1);
            }
            right++;
            sum += arr[right];
        }
        return maxLen;
    }
};

#endif //PROBLEM_10_H
