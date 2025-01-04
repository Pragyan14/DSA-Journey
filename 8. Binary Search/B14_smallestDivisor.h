#include<bits/stdc++.h>
using namespace std;

#ifndef B14_SMALLESTDIVISOR_H
#define B14_SMALLESTDIVISOR_H

// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

class B14 {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size(), low = 1, high = *max_element(nums.begin(),nums.end()), ans = -1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(sum(nums,mid,n) <= threshold) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }

    int sum(vector<int> nums,int div,int n){
        int cnt = 0;
        for(int i=0;i<n;i++) {
            cnt += ceil((float)nums[i]/div);
        }
        return cnt;
    }
};

#endif //B14_SMALLESTDIVISOR_H
