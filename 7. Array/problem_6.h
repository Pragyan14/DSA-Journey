#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_6_H
#define PROBLEM_6_H

// Left Rotate an Array by k

class problem_6 {
public:
    // Brute Approach
    void rotate(vector<int> &arr,int k) {
        int n = arr.size();
        int temp[n];
        k = k % n;
        for(int i=0;i<k;i++) {
            temp[i] = arr[i];
        }
        for(int i=k;i<n;i++) {
            arr[i-k] = arr[i];
        }
        for(int i=n-k;i<n;i++) {
            arr[i] = temp[i - (n - k)];
        }
    }

    void Reverse(int arr[], int start, int end)
    {
        while (start <= end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

};



#endif //PROBLEM_6_H
