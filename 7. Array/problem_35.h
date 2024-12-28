#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_35_H
#define PROBLEM_35_H

// https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

class problem_35 {
public:
    int inversionCount(vector<int> &arr) {
        int n = arr.size(),cntr = 0;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(arr[j] < arr[i]) {
                    cntr++;
                }
            }
        }
        return cntr;
    }



    int mergeSort(vector<int>& arr,int low,int high) {
        int cnt = 0;
        if(low >= high) return cnt;
        int mid = (low+high) / 2;
        cnt += mergeSort(arr,low,mid);
        cnt += mergeSort(arr,mid+1,high);
        cnt += merge(arr,low,mid,high);
        return cnt;
    }

    int merge(vector<int>& arr,int low,int mid,int high) {
        vector<int> temp;
        int left = low, right = mid + 1;

        int cnt = 0;
        while(left <= mid && right <= high) {
            if(arr[left] <= arr[right]) temp.push_back(arr[left++]);
            else {
                temp.push_back(arr[right++]);
                cnt += (mid - left + 1);
            }
        }
        while(left <= mid) temp.push_back(arr[left++]);
        while(right <= high) temp.push_back(arr[right++]);

        for(int i=low;i<=high;i++) {
            arr[i] = temp[i-low];
        }

        return cnt;
    }

    int solution(vector<int> &arr) {
        return mergeSort(arr,0,arr.size()-1);
    }
};

#endif //PROBLEM_35_H
