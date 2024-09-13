#include<bits/stdc++.h>
using namespace std;
#ifndef PROBLEM_7_H
#define PROBLEM_7_H


// Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array while
// keeping the non-zero elements at the start of the array in their original order. Return the modified array.

// https://www.naukri.com/code360/problems/ninja-and-the-zero-s_6581958

class problem_7 {
public:
    // BRUTE APPROCH
    // TC = O(2n)
    // SC = O(n)
    void moveZerosBrute(vector<int> &arr, int n) {
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                temp.push_back(arr[i]);
            }
        }
        for (int i = 0; i < temp.size(); i++) {
            arr[i] = temp[i];
        }
        for (int i = temp.size(); i < n; i++) {
            arr[i] = 0;
        }
    }

    // OPTIMAL APPROACH
    // TC = O(n)
    // SC = O(1)
    void moveZerosOpitmal(vector<int> &arr, int n) {
        int j = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                j = i;
                break;
            }
        } // TC = O(x)

        if (j != -1) {
            for (int i = j + 1; i < n; i++) {
                if (arr[i] != 0) {
                    swap(arr[i], arr[j]);
                    j++;
                }
            } // TC = O(n-x)
        }
    }
};


#endif //PROBLEM_7_H
