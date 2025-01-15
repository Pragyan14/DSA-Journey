#include<bits/stdc++.h>
using namespace std;

#ifndef B26_INTERSECT_H
#define B26_INTERSECT_H

// https://leetcode.com/problems/intersection-of-two-arrays-ii/

class B26 {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mpp;
        vector<int> ans;
        for(int num:nums1) mpp[num]++;
        for(int num: nums2){
            if(mpp.find(num) != mpp.end() && mpp[num] > 0){
                ans.push_back(num);
                mpp[num]--;
            }
        }
        return ans;
    }
};

#endif //B26_INTERSECT_H
