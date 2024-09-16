#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_9_H
#define PROBLEM_9_H


// https://www.naukri.com/code360/problems/sorted-array_6613259

class problem_9 {
public:
    vector<int> unionOfArray(vector<int> a,vector<int> b) {
        int i=0,j=0;
        vector<int> temp;
        while(i<a.size() && j<b.size()) {
            if(a[i] == b[j]) {
                if(temp.size() == 0 || temp.back() != a[i]) {
                    temp.push_back(a[i]);
                }
                i++;j++;
            }

            else if(a[i]<b[j]) {
                if(temp.size() == 0 || temp.back() != a[i]) {
                    temp.push_back(a[i]);
                }
                i++;
            }

            else {
                if(temp.size() == 0  || temp.back() != b[j]) {
                    temp.push_back(b[j]);
                }
                j++;
            }
        }
        while(i<a.size()) {
            if(temp.size() == 0 || temp.back() != a[i]) {
                temp.push_back(a[i]);
            }
            i++;
        }
        while(j<b.size()) {
            if(temp.size() == 0 || temp.back() != b[j]) {
                temp.push_back(b[j]);
            }
            j++;
        }
        return temp;
    }
};

#endif //PROBLEM_9_H
