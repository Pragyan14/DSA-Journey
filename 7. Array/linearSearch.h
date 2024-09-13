#include<bits/stdc++.h>
using namespace std;

#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H



class linearSearch {
public:
    int ls(vector<int> arr,int n,int x) {
        for(int i=0;i<n;i++) {
            if(arr[i] == x) {
                return i;
            }
        }
        return -1;
    }
};



#endif //LINEARSEARCH_H
