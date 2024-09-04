#include<bits/stdc++.h>
#include <iostream>
#include "Sins.h"

using namespace std;
// int count = 0;
void printNTimes(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    printNTimes(n - 1);
}

void print1ToN(int n) {
    if (n > 0) {
        print1ToN(n - 1);
        cout << n << " ";
    }
}

int sumOFNUmbers(int n) {
    if(n == 0) return 0;
    return  n + sumOFNUmbers(n-1);
}

int factorial(int n) {
    if(n==1) return 1;
    return n * factorial(n-1);
}

void reverseArray(int i,int arr[],int n) {
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverseArray(i+1,arr,n);
}

bool checkPanlindrome(int i,string str) {
    if(i>=str.size()/2) return true;
    if(str.at(i) != str.at(str.size()-i-1))
        return false;
    return checkPanlindrome(i+1,str);
}

int nThFabonacci(int n) {
    if(n<=1) {
        return n;
    }
    int last = nThFabonacci(n-1);
    int sLast = nThFabonacci(n-2);
    return last + sLast;
}

int main() {
    // printNTimes(5);
    // int arr[5] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(int);
    // reverseArray(0,arr,n);
    // for (int i=0;i<n;i++) cout<<arr[i]<<" ";

    // string str = " ";
    // cout<<checkPanlindrome(0,str);

    /* The Deadly Sin */
    int x,y;
    Sins s;
    cin>>x>>y;
    cout<<s.war(max(x,y),min(x,y));

    // cout<<nThFabonacci(6);
    return 0;
}
