#include<bits/stdc++.h>
using namespace std;

#ifndef S1_REMOVEOUTERPARENTHESES_H
#define S1_REMOVEOUTERPARENTHESES_H

// https://leetcode.com/problems/remove-outermost-parentheses/

class S1 {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int cnt = 0;
        for(char c: s) {
            if(c == '(') {
                cnt++;
                if(cnt != 1) ans += '(';
            }
            else {
                cnt--;
                if(cnt != 0) ans += ')';
            }
        }
        return ans;
    }
};

#endif //S1_REMOVEOUTERPARENTHESES_H
