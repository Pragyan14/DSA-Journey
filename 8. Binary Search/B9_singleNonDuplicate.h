#include<bits/stdc++.h>
using namespace std;

#ifndef B9_SINGLENONDUPLICATE_H
#define B9_SINGLENONDUPLICATE_H

// https://leetcode.com/problems/single-element-in-a-sorted-array/

class B9 {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        int low = 0,high = n-1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid+1]) return nums[mid];
            if((mid%2 == 1 && nums[mid] == nums[mid - 1]) || (mid%2==0 && nums[mid] == nums[mid+1])) low = mid + 1;
            else high = mid - 1;
        }
    }
};

#endif //B9_SINGLENONDUPLICATE_H
