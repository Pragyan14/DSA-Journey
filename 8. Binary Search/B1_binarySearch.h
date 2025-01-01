#include<bits/stdc++.h>
using namespace std;

#ifndef B1_BINARYSEARCH_H
#define B1_BINARYSEARCH_H

class B1 {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};

#endif //B1_BINARYSEARCH_H
