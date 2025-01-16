#include<bits/stdc++.h>
using namespace std;

#ifndef S2_REVERSEWORDS_H
#define S2_REVERSEWORDS_H

/*
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should
only have a single space separating the words. Do not include any extra spaces.

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"

*/

// https://leetcode.com/problems/reverse-words-in-a-string/

class S2 {
public:
    string reverseWords(string s) {
        vector<string> temp;
        char empty = ' ';
        string word = "";
        for(char c: s) {
            if(c != empty) word += c;
            else {
                if(word.length() == 0) continue;
                temp.push_back(word);
                word = "";
            }
        }
        for(const auto& it:temp) {
            cout<<it<<" ";
        }
        return "";
    }
};

#endif //S2_REVERSEWORDS_H
