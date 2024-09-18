#include<bits/stdc++.h>
using namespace std;


#ifndef SINGLE_H
#define SINGLE_H



class single {
public:
    int bruteSinlge(vector<int> nums) {
        int num;
        for(int i=0;i<nums.size();i++) {
            num = nums[i];
            int cnt=0;
            for(int j=0;j<nums.size();j++) {
                if(nums[j] == num) {
                    cnt++;
                }
            }
            if(cnt == 1) {
                break;
            }
        }
        return num;
    }

    int betterSingle(vector<int> nums) {
        int single=0;
        map<int,int> mpp;
        for(int num:nums) {
            mpp[num]++;
        }
        for(auto it:mpp) {
            if(it.second == 1) single = it.first;
        }
        return single;
    }

    int optimalSingle(vector<int> nums) {
        int xorr=0;
        for(int i=0;i<nums.size();i++) {
            xorr=xorr ^ nums[i];
        }
        return xorr;
    }
};



#endif //SINGLE_H
