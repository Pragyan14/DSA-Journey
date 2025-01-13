#include<bits/stdc++.h>
using namespace std;

#ifndef B23_KTHELEMENT_H
#define B23_KTHELEMENT_H

// https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?

class B23 {
public:
    int kthElement(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1 = nums1.size(), n2 = nums2.size();
        if(n1 > n2) return kthElement(nums2,nums1,k);
        int low = max(k - n2,0), high = min(k,n1);
        int left = k;
        while(low <= high){
            int mid1 = (low + high) / 2;
            int mid2 = left - mid1;
            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;
            if(mid1 < n1) r1 = nums1[mid1];
            if(mid2 < n2) r2 = nums2[mid2];
            if(mid1 - 1 >= 0) l1 = nums1[mid1 - 1];
            if(mid2 - 1 >= 0) l2 = nums2[mid2 - 1];
            if(l1 <= r2 && l2 <= r1){
                return max(l1,l2);
            }
            else if(l1 > l2) high = mid1 - 1;
            else low = mid1 + 1;
        }
        return 0;
    }
};

#endif //B23_KTHELEMENT_H
