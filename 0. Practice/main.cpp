#include<bits/stdc++.h>
using namespace std;

#include "07_Remove_Element.h"
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

    vector<int> nums = {3,2,2,3};
    Remove_Element re;
    cout<<re.removeElement(nums,3)<<endl;
    for(auto it:nums) {
        cout<<it<<" ";
    }

    return 0;
}
