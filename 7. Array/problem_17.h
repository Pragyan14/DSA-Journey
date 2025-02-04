#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_17_H
#define PROBLEM_17_H

class problem_17 {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1, n = nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1) reverse(nums.begin(),nums.end());
        for(int i = n-1;i>ind;i--){
            if(nums[i] > nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin() + ind + 1,nums.end());
    }
};

#endif //PROBLEM_17_H
