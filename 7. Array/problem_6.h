#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_6_H
#define PROBLEM_6_H

// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// https://leetcode.com/problems/rotate-array/description/

class problem_6 {
public:
    void rotate(vector<int> &arr,int k) {
        int n = arr.size();
        r(arr,0,n-k-1   );
        r(arr,n-k,n-1);
        r(arr,0,n-1);
    }

    void r(vector<int> &arr, int start, int end)
    {
        while (start < end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }

};



#endif //PROBLEM_6_H
