#include<bits/stdc++.h>
using namespace std;


#ifndef MAXCONSECUTIVEONES_H
#define MAXCONSECUTIVEONES_H

class maxConsecutive {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0,counter=0;
        for(int num : nums) {
            if(num == 1) {
                counter++;
                maxi = max(maxi,counter);
            }
            else {
                counter = 0;
            }
        }

        return maxi;
    }
};

#endif //MAXCONSECUTIVEONES_H
