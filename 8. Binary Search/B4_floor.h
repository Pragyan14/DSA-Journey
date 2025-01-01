#include<bits/stdc++.h>
using namespace std;

#ifndef B4_FLOOR_H
#define B4_FLOOR_H

class B4 {
public:
    int getFloor(vector<int> arr,int n,int x) {
        int floor = -1,low = 0, high = n - 1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] <= x) {
                floor = arr[mid];
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return floor;
    }
};

#endif //B4_FLOOR_H
