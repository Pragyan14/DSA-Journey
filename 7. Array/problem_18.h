#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_18_H
#define PROBLEM_18_H

class problem_18 {
public:
    vector<int> leader(vector<int>& arr) {
        vector<int> leaders;
        int n = arr.size();
        int maxi = INT_MIN;
        for(int i=n-1;i>=0;i--) {
            if(arr[i] >= maxi) {
                leaders.push_back(arr[i]);
                maxi = arr[i];
            };
        }
        reverse(leaders.begin(),leaders.end());
        return leaders;
    }

    // https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
    void replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxi = arr[n-1];
        arr[n-1] = -1;
        for(int i=n-2;i>=0;i--) {
            int temp = arr[i];
            arr[i] = maxi;
            if(temp >= maxi) {
                maxi = temp;
            }
        }
    }
};

#endif //PROBLEM_18_H
