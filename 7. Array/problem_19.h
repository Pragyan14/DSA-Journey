#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_19_H
#define PROBLEM_19_H

// https://leetcode.com/problems/longest-consecutive-sequence/submissions/1447880099/

class problem_19 {
public:
    // BETTER
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int longest = 1, lastSmaller = INT_MIN,cnt = 0;
        for(int num: nums) {
            if(num-1 == lastSmaller) {
                cnt++;
                lastSmaller = num;
            }
            else if(num != lastSmaller) {
                cnt = 1;
                lastSmaller = num;
            }
            longest = max(longest,cnt);
        }
        return longest;
    }

    // OPTIMAL
    int longestConsecutive1(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int longest = 1;
        unordered_set<int> st;
        for(int num: nums) {
            st.insert(num);
        }
        for(auto it: st) {
            if(st.find(it-1) == st.end()) {
                int cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end()) {
                    x++;
                    cnt++;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};

#endif //PROBLEM_19_H
