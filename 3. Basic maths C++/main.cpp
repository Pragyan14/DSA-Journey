#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void printDivisors(int n) {
    vector<int> ls;
    for (int i = 1; i * i < n; i++) {
        if (n % i == 0) {
            ls.push_back(i);
            if ((n / i) != i) {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto item: ls) { cout << item << " "; }
}

void checkPrime(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (n / i != i) {
                count++;
            }
        }
    }
    if (count == 2) {
        cout << "PRIME";
        return;
    };
    cout << "NOT PRIME";
}

int findGCF(int n1, int n2) {
    for (int i = min(n1, n2); i > 0; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            return i;
        }
    }
    return 1;
}

int findGcfEffiicent(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a = a % b;
        else{
            b = b % a;
        }
    }
    if (a == 0) return b;
    return a;
}

int main() {
    // printDivisors(36);
    // checkPrime(11);
    cout << findGcfEffiicent(42, 10);
    return 0;
}
