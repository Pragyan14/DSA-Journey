#include<bits/stdc++.h>

#include "problem_4.h"
#include "problem_5.h"
#include "problem_6.h"
#include "problem_7.h"
#include "linearSearch.h"
using namespace std;

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

    vector<int> arr = {13, 30, 22, 31, 42, 78, 10, 16};
    linearSearch l;
    cout<<l.ls(arr,arr.size(),100);

    return 0;
}
