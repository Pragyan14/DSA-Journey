#include<bits/stdc++.h>
using namespace std;

#ifndef INC_06_RECURSION_H
#define INC_06_RECURSION_H

class recursion {
public:
    void printNTimes(int n) {
        if(n == 0)
            return;
        cout<<"Hello\n";
        printNTimes(n-1);
    }

    void print1ToN(int n) {
        if(n==0) return;
        print1ToN(n-1);
        cout<<"World\n";
    }

    int sum(int n) {
        if(n==0) return 0;
        return n+sum(n-1);
    }

    int factorial(int n) {
        if(n == 1) return 1;
        return n * factorial(n-1);
    }

    void reverseArray(int i,vector<int> &arr,int n) {
        if(i>=n/2) return;
        swap(arr[i],arr[n-i-1]);
        reverseArray(i+1,arr,n);
    }

    int fibonacci(int n) {
        if(n<=1) return n;
        int last = fibonacci(n-1);
        int sLast = fibonacci(n-2);
        return last + sLast;
    }
};

#endif //INC_06_RECURSION_H
