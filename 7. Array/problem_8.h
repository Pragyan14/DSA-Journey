#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_8_H
#define PROBLEM_8_H

// https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149

class problem_8 {
public:
    vector<int> intersection(vector<int> a,vector<int> b){
        int i=0,j=0;
        vector<int> temp;
        while(i<a.size() && j<b.size()) {
            if(a[i] == b[j]) {
                temp.push_back(a[i]);
                i++;j++;
            }

            else if(a[i]<b[j]) i++;

            else j++;
        }
        return temp;
    }
};

#endif //PROBLEM_8_H
