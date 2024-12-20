#include<bits/stdc++.h>
using namespace std;

#ifndef PROBLEM_30_H
#define PROBLEM_30_H

// https://leetcode.com/problems/valid-parentheses/

class problem_30 {
public:
    bool isSame(char c1,char c2) {
        if(c1 == '}' && c2 == '{') return true;
        else if(c1 == ']' && c2 == '[') return true;
        else if (c1 == ')' && c2 == '(') return true;
        return false;
    }
    bool isValid(string s) {
        stack<char> stack;
        for(char c: s) {
            if(c == '{' || c == '(' || c == '[') {
                stack.push(c);
            }
            else {
                if (s.empty()) return false;
                char top = stack.top();
                if(!isSame(c,top)) return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
};

#endif //PROBLEM_30_H
