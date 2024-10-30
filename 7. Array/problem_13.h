#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_13_H
#define PROBLEM_13_H

class problem_13 {
public:
    int majortiyElements(vector<int> nums) {
        map<int,int> mpp;
        int len = nums.size();
        for(int i=0;i<len;i++) {
            mpp[nums[i]]++;
        }
        for(auto it: mpp) {
            if(it.second > len/2) {
                return it.first;
            }
        }
        return -1;
    }

    int majortiyElements1(vector<int> nums) {
        int cnt = 0,cnt2 = 0;
        int el;
        for(int num : nums) {
            if(cnt == 0) {
                el = num;
                cnt = 1;
            }
            else if(num == el) cnt++;
            else cnt--;
        }
        for(int num: nums) {
            if(num == el) {
                cnt2++;
            }
        }
        if(cnt2>(nums.size()/2)) {
            return el;
        }
        return -1;
    }

};

#endif
