#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_26_H
#define PROBLEM_26_H

// https://leetcode.com/problems/majority-element-ii/

class problem_26 {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1 = INT_MIN,el2 = INT_MIN, cnt1 = 0, cnt2 = 0;

        for(int num: nums) {
            if(cnt1 == 0 && el2 != num) {
                el1 = num;
                cnt1 = 1;
            }
            else if(cnt2 == 0 && el1 != num) {
                el2 = num;
                cnt2 = 1;
            }
            else if(num == el1) cnt1++;
            else if(num == el2) cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }

        vector<int> ls;
        cnt1 = 0; cnt2 = 0;
        for(int num: nums) {
            if(num == el1) cnt1++;
            if(num == el2) cnt2++;
        }

        int mini = nums.size()/3 + 1;
        if(cnt1 >= mini) ls.push_back(el1);
        if(cnt2 >= mini) ls.push_back(el2);
        return ls;
     }
};

#endif //PROBLEM_26_H
