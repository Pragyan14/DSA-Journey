#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_16_H
#define PROBLEM_16_H

// https://leetcode.com/problems/rearrange-array-elements-by-sign/

class problem_16 {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int posIndex = 0, negIndex = 1;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i] < 0) {
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
            else {
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return ans;
    }

    // varietie 2 when pos != neg
    vector<int> rearrangeArray1(vector<int>& nums) {
        vector<int> pos,neg;
        int n = nums.size(),posIndex=0,negIndex=1;
        for(int i=0;i<n;i++) {
            (nums[i]>0)?pos.push_back(nums[i]):neg.push_back(nums[i]);
        }
        if(pos.size() > neg.size()) {
            for(int i=0;i<neg.size();i++) {
                nums[2*i] = pos[i];
                nums[2*i+1] = neg[i];
            }
            int index = neg.size() * 2;
            for(int i=neg.size();i<pos.size();i++) {
                nums[index++] = pos[i];
            }
        }
        else{
            for(int i=0;i<pos.size();i++) {
                nums[2*i] = pos[i];
                nums[2*i+1] = neg[i];
            }
            int index = pos.size() * 2;
            for(int i=pos.size();i<neg.size();i++) {
                nums[index++] = neg[i];
            }
        }
        return nums;
    }

};

#endif //PROBLEM_16_H
