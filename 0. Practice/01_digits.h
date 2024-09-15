#include<bits/stdc++.h>
using namespace std;

#ifndef INC_01_DIGITS_H
#define INC_01_DIGITS_H

class digits {
public:
    void extractDigits(int x) {
        int temp = x;
        while(temp>0) {
            int lastDigit = temp%10;
            temp = temp/10;
            cout<<lastDigit;
        }
    }
    int reverseDigits(int x) {
        int temp = x,rev = 1;
        while(temp>0) {
            int ld = temp%10;
            temp = temp / 10;
            rev = (rev * 10) + ld;
        }
        return rev;
    }
};

#endif //INC_01_DIGITS_H
