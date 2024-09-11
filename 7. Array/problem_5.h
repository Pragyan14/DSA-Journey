#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_5_H
#define PROBLEM_5_H



class problem_5 {
public:
    // Approach 1
    vector<int> rotateArray1(vector<int> arr,int n) {
        for(int i=0;i<n-1;i++) {
            swap(arr[i],arr[i+1]);
        }
        return arr;
    }

    // Approach 2
    vector<int> rotateArray2(vector<int> arr,int n) {
        int temp = arr[0];
        for(int i=1;i<n;i++) {
           arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
        return arr;
    }
};



#endif //PROBLEM_5_H
