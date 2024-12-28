#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_36_H
#define PROBLEM_36_H

// https://leetcode.com/problems/reverse-pairs/

class problem_36 {
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
    int mergeSort(vector<int>& arr,int low,int high) {
        int cnt = 0;
        if(low>=high) return cnt;
        int mid = (low + high) / 2;
        cnt += mergeSort(arr,low,mid);
        cnt += mergeSort(arr,mid+1,high);
        int j = mid + 1;
        for(int i = low;i<=mid;i++){
            while(j <= high && (long long)arr[i] > 2LL*arr[j]){
                j++;
            }
            cnt += (j-mid-1);
        }
        merge(arr,low,mid,high);
        return cnt;
    }

    void merge(vector<int>& arr,int low, int mid,int high) {
        int left = low, right = mid + 1;
        vector<int> temp;
        while(left<=mid && right<=high) {
            if(arr[left] <= arr[right]) temp.push_back(arr[left++]);
            else temp.push_back(arr[right++]);
        }
        while(left<=mid) temp.push_back(arr[left++]);
        while(right<=high) temp.push_back(arr[right++]);
        for(int i=low;i<=high;i++) {
            arr[i] = temp[i - low];
        }
    }
};

#endif //PROBLEM_36_H
