#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_3_H
#define PROBLEM_3_H

// https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957

// Problem statement
// You have been given an array ‘a’ of ‘n’ non-negative integers.
// You have to check whether the given array is sorted in the non-decreasing order or not.

// Your task is to return 1 if the given array is sorted. Else, return 0.

// Example :
// Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
// Output: 1

class problem_3 {
public:
    int isSorted(int n, vector<int> arr) {
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]) return 0;
        }
        return 1;
    }
};



#endif //PROBLEM_3_H
