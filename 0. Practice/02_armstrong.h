#include<bits/stdc++.h>
using namespace std;

#ifndef INC_02_ARMSTRONG_H
#define INC_02_ARMSTRONG_H

class armstrong {
public:
    int numberOfDigits(int x) {
        int count = 0,temp = x;
        while(temp>0) {
            temp = temp/10;
            count++;
        }
        return count;
    }
    bool findArmstrong(int x) {
        int temp=x,sum=0,count=numberOfDigits(x);
        while(temp>0) {
            int ld = temp%10;
            temp = temp/10;
            sum=sum+(int)pow(ld,count);
        }
        return x==sum;
    }
};

#endif //INC_02_ARMSTRONG_H
