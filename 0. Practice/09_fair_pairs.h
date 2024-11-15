#include<bits/stdc++.h>
using namespace std;

#ifndef INC_09_FAIR_PAIRS_H
#define INC_09_FAIR_PAIRS_H

// https://leetcode.com/problems/count-the-number-of-fair-pairs/description/?envType=daily-question&envId=2024-11-13

class p9 {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long count = 0;
        int n = nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++) {
            int num = nums[i];
            int more =
        }
        return count;
    }
};

#endif //INC_09_FAIR_PAIRS_H
