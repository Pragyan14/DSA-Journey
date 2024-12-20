#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_33_H
#define PROBLEM_33_H

// https://leetcode.com/problems/merge-sorted-array/description/

class problem_33 {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, k = m + n - 1,j = n - 1;
        while(j >= 0) {
            if(i>=0 && nums1[i] >= nums2[j]) nums1[k--] = nums1[i--];
            else nums1[k--] = nums2[j--];
        }
    }
};

#endif //PROBLEM_33_H
