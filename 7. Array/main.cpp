#include<bits/stdc++.h>

#include "problem_4.h"
#include "problem_5.h"
#include "problem_6.h"
using namespace std;

int main() {
    // vector<int> arr = {1, 2, 2 ,3, 3 ,3 ,4 ,4 ,5, 5 };
    // problem_4 p4;
    // cout<<p4.removeDuplicates(arr,arr.size());
    // for(auto it:arr) {
    //     cout<<it<<" ";
    // }

    // vector<int> arr = {1,2,3,4,5,6,7};
    int arr[] = {1,2,3,4,5,6,7};
    int k = 3;
    int n =7;
    problem_6 p6;
    p6.Reverse(arr, 0, n - k - 1);
    // Reverse last k elements
     p6.Reverse(arr, n - k, n - 1);
    // Reverse whole array
     p6.Reverse(arr, 0, n - 1);

    cout << "After Rotating the k elements to right ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;


    // vector<int> arr1 = {1,2,3,4,5};
    // problem_5 p5;
    // vector<int> rArray = p5.rotateArray2(arr1,arr1.size());
    // for (auto it: rArray) {
    //     cout<<it<<" ";
    // }
    return 0;
}
