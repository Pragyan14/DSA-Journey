#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_1_H
#define PROBLEM_1_H


// Given an array, arr. The task is to find the largest element in it.

class problem_1 {
public:
    int largest(vector<int> &arr) {
        int largest = arr[0];
        int n = arr.size();
        for(int i=1;i<n;i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }
        return largest;
    }
};



#endif //PROBLEM_1_H
