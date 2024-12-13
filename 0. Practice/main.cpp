#include<bits/stdc++.h>
using namespace std;

#include "11_Contains_Duplicate.h"
int main() {

    // digits d;
    // d.extractDigits(1234);
    // cout<<endl<<d.reverseDigits(4321);

    // armstrong a;
    // cout<<a.findArmstrong(371);

    // divisor d;
    // d.numberOfDivisor(36);

    // prime p;
    // cout<<p.isPrime(5);

    // gcd_hcf g;
    // cout<<g.bruteGCD(9,11)<<endl;
    // cout<<g.opimalGCD(9,36);

    // recursion r;
    // r.printNTimes(5);
    // r.print1ToN(5);
    // cout<<r.sum(5);
    // cout<<r.factorial(5);
    // vector<int> arr = {1,2,3,4,5};
    // r.reverseArray(0,arr,arr.size());
    // for(auto it:arr) {
    //     cout<<it<<" ";
    // }
    // cout<<r.fibonacci(6);

    // vector<int> nums = {3,2,2,3};
    // Remove_Element re;
    // cout<<re.removeElement(nums,3)<<endl;
    // for(auto it:nums) {
    //     cout<<it<<" ";
    // }

    // p8 p8;
    // vector<int> nums = {8,9,9,9};
    // vector<int> ans = p8.plusOne(nums);
    // for(auto it:ans) {
    //     cout<<it<<" ";
    // }

    // p9 p9;
    // vector<int> nums = {1,7,9,2,5};
    // cout<<p9.countFairPairs(nums,11,11);

    // vector<int> nums1 = {1,2,3,0,0,0};
    // vector<int> nums2 = {2,5,6};
    // p10 p10;
    // p10.merge(nums1,3,nums2,3);
    // for(auto it:nums1) {
    //     cout<<it<<" ";
    // }

    vector<int> nums = {1,2,3,4};
    duplicate d;
    cout<<d.containsDuplicate(nums);

    return 0;
}
