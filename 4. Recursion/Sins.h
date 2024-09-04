#ifndef SINS_H
#define SINS_H
#include<bits/stdc++.h>
using namespace std;
/*
https://www.codechef.com/problems/SINS
 */

class Sins {
public:
    int war(int x, int y) {
        if(x%y == 0) return y*2;
        if(y==0) return x;
        x = x%y;
        return war(max(x,y),min(x,y));
    }
};


#endif //SINS_H

