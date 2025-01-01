#include<bits/stdc++.h>
using namespace std;

#ifndef B6_COUNTFREQ_H
#define B6_COUNTFREQ_H

// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

class B6 {
public:
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        int first = firstOccurance(arr,target,n);
        if(first == -1) return 0;
        int last = lastOccurance(arr,target,n);
        return last - first + 1;
    }
    int firstOccurance(vector<int> arr,int x,int n) {
        int low = 0,high = n - 1,first = -1;
        while(low <= high) {
            int mid = (low+high) / 2;
            if(arr[mid] == x) {
                first = mid;
                high = mid - 1;
            }
            else if(arr[mid] > x) high = mid - 1;
            else low = mid + 1;
        }
        return first;
    }

    int lastOccurance(vector<int> arr,int x,int n) {
        int low = 0,high = n - 1,last = -1;
        while(low <= high) {
            int mid = (low+high) / 2;
            if(arr[mid] == x) {
                last = mid;
                low = mid + 1;
            }
            else if(arr[mid] > x) high = mid - 1;
            else low = mid + 1;
        }
        return last;
    }
};

#endif //B6_COUNTFREQ_H
