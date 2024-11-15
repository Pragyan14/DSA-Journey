#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_20_H
#define PROBLEM_20_H

class problem_20 {
public:
    int binarySearch(vector<int> nums,int target) {
        int n = nums.size(),low = 0;
        int high = n-1;
        while(low <= high){
            int mid = (high + low) / 2;
            if (target == nums[mid]) return mid;
            else if (target < nums[mid]) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};

#endif //PROBLEM_20_H
