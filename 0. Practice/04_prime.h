#include<bits/stdc++.h>
using namespace std;

#ifndef INC_04_PRIME_H
#define INC_04_PRIME_H

class prime {
public:
    bool isPrime(int n) {
        int count=0;
        for(int i=1;i*i<=n;i++) {
            if(n%i == 0) {
                count++;
                if((n/i) != i) {
                    count++;
                }
            }
        }
        return count == 2;
    }
};

#endif //INC_04_PRIME_H
