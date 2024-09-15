#include<bits/stdc++.h>
using namespace std;

#ifndef INC_03_DIVISOR_H
#define INC_03_DIVISOR_H

class divisor {
public:
    void numberOfDivisor(int n) {
        for(int i=1;i*i<=n;i++) {
            if(n%i == 0) {
                cout<<i<<" ";
                if((n/i) != i) {
                    cout<<n/i<<" ";
                }
            }
        }
    }
};

#endif //INC_03_DIVISOR_H
