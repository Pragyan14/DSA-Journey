#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_11_H
#define PROBLEM_11_H

// https://leetcode.com/problems/two-sum/

class problem_11 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            int num = nums[i];
            int more = target - num;
            if(mpp.find(more) != mpp.end()) {
                return {mpp[more],i};
            }
        mpp[num] = i;
        }
        return {-1,-1};
    }

    // https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
    // if array is sorted
    vector<int> twoSumSorted(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        while(left<right){
            int sum = nums[left] + nums[right];
            if(sum == target) return {left+1,right+1};
            else if (sum > target) right--;
            else left++;
        }
        return {-1,-1};
    }
};

#endif //PROBLEM_11_H
