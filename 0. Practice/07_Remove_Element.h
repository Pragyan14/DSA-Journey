#include<bits/stdc++.h>
using namespace std;

#ifndef INC_07_REMOVE_ELEMENT_H
#define INC_07_REMOVE_ELEMENT_H

class Remove_Element {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int low = 0,high = n - 1;
        while(low < high){
            while(nums[low] != val && low<n) low++;
            while(nums[high] == val && high>0) high--;
            if(low<high)
                swap(nums[low],nums[high]);
        }
        return low;
    }
};

#endif //INC_07_REMOVE_ELEMENT_H
