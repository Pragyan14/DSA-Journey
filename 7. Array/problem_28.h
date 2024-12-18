#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_28_H
#define PROBLEM_28_H

// https://leetcode.com/problems/4sum/

class problem_28 {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(nums[j]==nums[j-1]) continue;
                int k=j+1, l = n-1;
                while(k<l){
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum == target){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;l--;
                        while(k<l && nums[k] == nums[k-1]) k++;
                        while(k<l && nums[l] == nums[l+1]) l--;
                    }
                    else if(sum < target) k++;
                    else if(sum > target) l--;
                }
            }
        }
        return ans;
    }
};

#endif //PROBLEM_28_H
