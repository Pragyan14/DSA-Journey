#include <iostream>
using namespace std;

#include "B24_rowWithMax1s.h"

int main() {

    // vector<int> nums = {1,2,3,4,5,6,7,8};
    // B1 b1;
    // cout<<b1.search(nums,3);
    // return 0;

    // vector<int> nums = {5, 6, 8, 8, 6, 5, 5, 6};
    // B7 b7;
    // b7.getFloorAndCeil(7,nums);

    // vector<int> nums = {1,2,5,9};
    // B14 b14;
    // cout<<b14.smallestDivisor(nums,7);

    // vector<int> nums = {0,3,4,7,10,9};
    // B17 b17;
    // cout<<b17.aggressiveCows(nums,4);

    // vector<int> nums = {3,2,1};
    // B18 b18;
    // cout<<b18.findMin(nums);

    // vector<int> nums1 = {100, 112, 256, 349, 770};
    // vector<int> nums2 = {72, 86, 113, 119, 265, 445, 892};
    // B23 b23;
    // cout<<b23.kthElement(nums1,nums2,7);

    vector<vector<int>> nums = {{0,1,1,1}, {0,0,1,1}, {1,1,1,1}, {0,0,0,0},{0,0,1,1}};
    B24 b24;
    cout<<b24.rowWithMax1s(nums);

    return 0;

}
