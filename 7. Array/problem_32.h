#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_32_H
#define PROBLEM_32_H
// https://leetcode.com/problems/merge-sorted-array/
class problem_32 {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());

        for(int i=0;i<n-1;i++) {
            int first = intervals[i][0];
            int second = intervals[i][1];
            if(second <= intervals[i+1][0]) {
                second = max(second,intervals[i+1][0]);
                continue;
            };
            ans.push_back({first,second});
        }

        return ans;
    }
};

#endif //PROBLEM_32_H
