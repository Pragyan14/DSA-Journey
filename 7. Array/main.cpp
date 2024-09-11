#include<bits/stdc++.h>

#include "problem_4.h"
#include "problem_5.h"
using namespace std;

int main() {
    // vector<int> arr = {1, 2, 2 ,3, 3 ,3 ,4 ,4 ,5, 5 };
    // problem_4 p4;
    // cout<<p4.removeDuplicates(arr,arr.size());

    vector<int> arr1 = {1,2,3,4,5};
    problem_5 p5;
    vector<int> rArray = p5.rotateArray2(arr1,arr1.size());
    for (auto it: rArray) {
        cout<<it<<" ";
    }
    return 0;
}
