#include<bits/stdc++.h>
using namespace std;

#ifndef INC_05_GCD_HCF_H
#define INC_05_GCD_HCF_H

class gcd_hcf {
public:
    int bruteGCD(int n1,int n2) {
        for(int i=min(n1,n2);i>0;i--) {
            if(n1%i == 0 && n2%i == 0) {
                return i;
            }
        }
        return 1;
    }

    // GCD(a,b) = GCD(a%b,b) where, a>b
    int opimalGCD(int n1,int n2) {
        while (n1>0 && n2>0) {
            (n1>n2) ? (n1 = n1%n2) : (n2 = n2%n1);
        }
        if(n1==0) return n2;
        return n1;

    }
};

#endif //INC_05_GCD_HCF_H
