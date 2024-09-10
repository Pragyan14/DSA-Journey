#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_2_H
#define PROBLEM_2_H

// Given an array arr, return the second largest distinct element from an array.
// If the second largest element doesn't exist then return -1.
// https://www.geeksforgeeks.org/problems/second-largest3735/1

class problem_2 {
public:
    int print2largest(vector<int> &arr) {
        int largest = arr[0];
        int secondLargest = -1;
        int n = arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && arr[i]>secondLargest){
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
};



#endif //PROBLEM_2_H
