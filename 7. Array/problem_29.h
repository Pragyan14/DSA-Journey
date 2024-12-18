#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/3sum-closest/

#ifndef PROBLEM_29_H
#define PROBLEM_29_H

class problem_29 {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = 0;
        int diff = INT_MAX;
        for(int i=0;i<n-2;i++){
            if(i!=0 && nums[i] == nums[i-1]) continue;
            int j = i + 1;
            int k = n - 1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == target){
                    j++;k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
                else if(sum < target) j++;
                else if(sum > target) k--;

                int currDiff = abs(sum - target);
                if(currDiff < diff) {
                    ans = sum;
                    diff = currDiff;
                }
            }
        }
        return ans;
    }
};

#endif //PROBLEM_29_H
