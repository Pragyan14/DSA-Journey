#include <iostream>
using namespace std;

#include "B7_Floor2.h"
#include "B14_smallestDivisor.h"

int main() {

    // vector<int> nums = {1,2,3,4,5,6,7,8};
    // B1 b1;
    // cout<<b1.search(nums,3);
    // return 0;

    // vector<int> nums = {5, 6, 8, 8, 6, 5, 5, 6};
    // B7 b7;
    // b7.getFloorAndCeil(7,nums);

    vector<int> nums = {1,2,5,9};
    B14 b14;
    cout<<b14.smallestDivisor(nums,7);

}
