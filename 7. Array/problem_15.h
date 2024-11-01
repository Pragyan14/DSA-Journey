#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_15_H
#define PROBLEM_15_H

// https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0?category&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=max-sum-in-sub-arrays

class problem_15 {
public:
    int pairWithMaxSum(vector<int> &arr) {
        int sum=0;
        int n = arr.size();
        int maxi = INT_MIN;
        for(int i=0;i<n-1;i++){
            int small = arr[i],secondSmall = arr[i+1];
            for(int j = i;j<n-1;j++){
                cout<<small<<" "<<secondSmall<<endl;
                sum = small + secondSmall;
                maxi = max(maxi,sum);
                if(arr[j] < small){
                    secondSmall = small;
                    small = arr[j];
                }
                else if (arr[j] > small && arr[j] < secondSmall){
                    secondSmall = arr[j];
                }

            }
        }
        return maxi;
    }
};

#endif //PROBLEM_15_H
