#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_4_H
#define PROBLEM_4_H

//https://www.naukri.com/code360/problems/remove-duplicates-from-sorted-array_1102307
//Remove Duplicates from Sorted Array

class problem_4 {
public:
    int removeDuplicates(vector<int> &arr, int n) {
        int i = 0;
        for(int j=1;j<n;j++){
            if(arr[i] != arr[j]){
                arr[++i] = arr[j];
            }
        }
        return i+1;
    }

};



#endif //PROBLEM_4_H
