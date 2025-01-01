#include<bits/stdc++.h>
using namespace std;

#ifndef B7_FLOOR2_H
#define B7_FLOOR2_H

class B7 {
public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int floor = -1,ceil = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i] <= x) floor = max(floor,arr[i]);
            if(arr[i] >= x) {
                if(ceil == -1) ceil = arr[i];
                else ceil = min(ceil,arr[i]);
            }
        }
        cout<<floor<<" "<<ceil;
        return {floor,ceil};
    }
};

#endif //B7_FLOOR2_H
