#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_24_H
#define PROBLEM_24_H

// https://leetcode.com/problems/subarray-sum-equals-k/

class problem_24 {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int,int> mpp;
        mpp[0] = 1;
        int preSum = 0,cnt = 0;
        for(int i=0;i<arr.size();i++) {
            preSum += arr[i];
            int remove = preSum - k;
            cnt += mpp[remove];
            mpp[preSum] += 1;
        }
        return cnt;
    }
};

#endif //PROBLEM_24_H
