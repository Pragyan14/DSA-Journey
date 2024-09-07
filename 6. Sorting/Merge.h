#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#ifndef MERGE_H
#define MERGE_H


class Merge {
public:
    void mergeSort(vector<int> &arr, int low, int high) {
        if (low == high) return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
    void merge(vector<int> &arr, int low, int mid, int high) {
        vector<int> temp;
        int leftPointer = low;
        int rightPointer = mid + 1;
        while (leftPointer <= mid && rightPointer <= high) {
            if (arr[leftPointer] >= arr[rightPointer]) {
                temp.push_back(arr[rightPointer]);
                rightPointer++;
            } else {
                temp.push_back(arr[leftPointer]);
                leftPointer++;
            }
        }
        while (leftPointer<=mid) {
            temp.push_back(arr[leftPointer]);
            leftPointer++;
        }
        while (rightPointer<=high) {
            temp.push_back(arr[rightPointer]);
            rightPointer++;
        }
        for(int i=low;i<=high;i++) {
            arr[i] = temp[i-low];
        }
    }
    void display(vector<int> &arr) {
        for(auto it : arr) {
            cout<<it<< " ";
        }
    }
};


#endif //MERGE_H
