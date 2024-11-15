#include<bits/stdc++.h>
using namespace std;

#include "problem_22.h"

int main() {
    // vector<int> arr = {1, 2, 2 ,3, 3 ,3 ,4 ,4 ,5, 5 };
    // problem_4 p4;
    // cout<<p4.removeDuplicates(arr,arr.size());
    // for(auto it:arr) {
    //     cout<<it<<" ";
    // }

    // vector<int> arr = {1,2,3,4,5,6,7};
    // // int arr[] = {1,2,3,4,5,6,7};
    // int k = 3;
    // int n = 7;
    // problem_6 p6;
    // p6.rotate(arr,k);


    // vector<int> arr1 = {1,2,3,4,5};
    // problem_5 p5;
    // vector<int> rArray = p5.rotateArray2(arr1,arr1.size());
    // for (auto it: rArray) {
    //     cout<<it<<" ";
    // }

    // vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 2, 5, 1};
    // problem_7 p7;
    // p7.moveZerosOpitmal(arr, arr.size());
    // for (auto it: arr) {
    //     cout << it << " ";
    // }

    // vector<int> arr = {13, 30, 22, 31, 42, 78, 10, 16};
    // linearSearch l;
    // cout<<l.ls(arr,arr.size(),100);

    // problem_8 p8;
    // vector<int> a = {1,2,2,3,3,4,5,6};
    // vector<int> b = {2,3,3,5,6,6,7};
    // vector<int> result = p8.intersection(a,b);
    //
    // for(auto it:result) {
    //     cout<<it<<" ";
    // }

    // problem_9 p9;
    // vector<int> a = {1,1,2,3,5,5,5,10,10};
    // vector<int> b = {2,4,7,10,10};
    // vector<int> result = p9.unionOfArray(a,b);
    //
    // for(auto it:result) {
    //     cout<<it<<" ";
    // }

    // vector<int> arr = {1,2,3,4};
    // missing m;
    // cout<<m.missingNumberBrute(arr,5);

    // vector<int> arr = {1,1,0,1,1,1,1,0,1,1};
    // maxConsecutive m;
    // cout<<m.findMaxConsecutiveOnes(arr);

    // vector<int> nums = {4,1,2,1,2};
    // single s;
    // cout<<s.optimalSingle(nums);

    // vector<int> nums = {1,1,1};
    // problem_10 p10;
    // cout<<p10.longestSubarrayWithSumKWithNegative(nums,2);

    // vector<int> nums = {2,0,2,1,1,0};
    // problem_12 p12;
    // p12.sortColors(nums);
    // for(auto it:nums) {
    //         cout<<it<<" ";
    // }

    // vector<int> nums = {400};
    // problem_18 p18;
    // p18.replaceElements(nums);
    // for(auto it:nums) {
    //     cout<<it<<" ";
    // }

    // vector<int> nums = {1,2,0,1};
    // problem_19 p19;
    // cout<<p19.longestConsecutive1(nums);

    // vector<int> nums = {1,3};
    // problem_20 p20;
    // cout<<p20.binarySearch(nums,2);

    // vector<vector<int>> nums = {{1,1,1},{1,0,1},{1,1,1}};
    // problem_21 p21;
    // p21.setZeroes(nums);

    vector<vector<int>> nums = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    problem_22 p22;
    int n = nums.size();
    p22.rotateOptimal(nums);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<nums[i][j]<<" ";
        }
    }
    return 0;
}
