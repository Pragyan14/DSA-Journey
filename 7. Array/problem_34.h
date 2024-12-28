#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_34_H
#define PROBLEM_34_H

// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

class problem_34 {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int hashArray[n+1] = {0};
        for(int i=0;i<n;i++) {
            hashArray[arr[i]]++;
        }
        int rep = -1, mis = -1;
        for(int i=1;i<=n;i++) {
            if(hashArray[i] == 2) rep = i;
            else if(hashArray[i] == 0) mis = i;

            if(rep != -1 && mis != -1) break;
        }
        return {rep,mis};
    }

    vector<int> findTwoElementOptimal(vector<int>& arr) {
        int n = arr.size();
        long long sn = (n*(n+1))/2;
        long long s2n = (n*(n+1)*(2*n+1))/6;
        long long s = 0, s2 = 0;
        for(int i=0;i<n;i++) {
            s += arr[i];
            s2 += (long long)arr[i] * (long long)arr[i];
        }
        long long val1 = s - sn;
        long long val2 = s2 - s2n;
        val2 = val2 / val1;
        long long x = (val1 + val2) / 2;
        long long y = x - val1;

        return {(int)x,int(y)};
    }
};

#endif //PROBLEM_34_H
