#include<bits/stdc++.h>
using namespace std;

#ifndef MISSING_H
#define MISSING_H

// https://www.naukri.com/code360/problems/missing-number_6680467

class missing {
public:
    // BRUTE Approche
    int missingNumberBrute(vector<int> arr,int n) {
        int missing;
        for(int i=1;i<n;i++) {
            int flag = 0;
            for(int j=0;j<n-1;j++) {
                if(arr[j] == i) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                missing = i;
            }
        }
        return missing;
    }

    //BETTER Approche
    int missingNumberBetter(vector<int> &arr,int n) {
        const int sum = (n*(n+1))/2;
        int missingSum = 0;
        for(int i=0;i<n-1;i++) {
            missingSum = missingSum + arr[i];
        }
        return sum-missingSum;
    }
};

#endif //MISSING_H
