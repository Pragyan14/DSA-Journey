#include<bits/stdc++.h>
using namespace std;

#ifndef INC_08_PLUS_ONE_H
#define INC_08_PLUS_ONE_H

// https://leetcode.com/problems/plus-one/

class p8 {
public:
    vector<int> plusOne(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1;i>=0;i--) {
            if(nums[i] != 9) {
                nums[i]++;
                return nums;
            }
            nums[i] = 0;
        }
        vector<int> ans(n+1,0);
        ans[0] = 1;
        return ans;
    }
};

#endif //INC_08_PLUS_ONE_H
