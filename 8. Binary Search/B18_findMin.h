#include<bits/stdc++.h>
using namespace std;

#ifndef B18_FINDMIN_H
#define B18_FINDMIN_H

// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/

class B18 {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        // if(n == 1) return nums[0];
        int low = 0,high = n - 1,ans = INT_MAX;
        while(low<=high){
            int mid = (low + high) / 2;
            if(nums[low] == nums[mid] && nums[low] == nums[high] && low != mid && low != high) {
                low++;
                high--;
            }
            else if(nums[low] <= nums[mid]) {
                ans = min(ans,nums[low]);
                low = mid + 1;
            }
            else {
                ans = min(ans,nums[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};

#endif //B18_FINDMIN_H
