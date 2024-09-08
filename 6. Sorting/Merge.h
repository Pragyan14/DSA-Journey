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
        int leftP = low;
        int rightP = mid + 1;
        while (leftP <= mid && rightP <= high) {
            if (arr[leftP] >= arr[rightP]) {
                temp.push_back(arr[rightP]);
                rightP++;
            } else {
                temp.push_back(arr[leftP]);
                leftP++;
            }
        }
        while (leftP<=mid) {
            temp.push_back(arr[leftP]);
            leftP++;
        }
        while (rightP<=high) {
            temp.push_back(arr[rightP]);
            rightP++;
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
