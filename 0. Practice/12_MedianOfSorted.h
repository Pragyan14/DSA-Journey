#include<bits/stdc++.h>
using namespace std;

#ifndef INC_12_MEDIANOFSORTED_H
#define INC_12_MEDIANOFSORTED_H

// https://leetcode.com/problems/median-of-two-sorted-arrays/description/

class p12 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        // vector<int> temp;
        // int left = 0,right = 0;
        // while(left < m && right < n) {
        //     if(nums1[left] < nums2[right]) temp.push_back(nums1[left++]);
        //     else temp.push_back(nums2[right++]);
        // }
        // while(left < m) temp.push_back(nums1[left++]);
        // while(right < n) temp.push_back(nums2[right++]);
        //
        // for(auto it: temp) {
        //     cout<<it<<" ";
        // }
        //
        // int size = m + n;
        // if(size % 2 == 0) {
        //     int m1 = (size / 2) - 1;
        //     int m2 = size / 2;
        //     cout<<endl<<double(temp[m1]+temp[m2]) / 2;
        // }
        // else {
        //     int m1 = size / 2;
        //     cout<<endl<<temp[m1];
        // }

        double median;
        int mid =  (m + n) / 2,left = 0, right = 0;
        while(left<m && right<n && mid > 0) {
            mid--;
            median = min((double)nums1[left],(double)nums2[right]);
            if(nums1[left] < nums2[right]) left++;
            else right++;
        }
        while(left<m && mid >= 0) {
            median = min((double)nums1[left++],(double)nums2[right]);
            mid--;
        }
        while(right<n && mid >= 0) {
            median = min((double)nums1[left],(double)nums2[right++]);
            mid--;
        }
        cout<<median<<" "<<left;
        // if(mid%2 == 0) {
        //     cout<<left<<" "<<right;
        // }else {
        //     cout<<median;
        // }
        return 0;
    }
};

#endif //INC_12_MEDIANOFSORTED_H
