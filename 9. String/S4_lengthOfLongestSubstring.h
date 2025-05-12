#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-substring-without-repeating-characters/

#ifndef S4_LENGTHOFLONGESTSUBSTRING_H
#define S4_LENGTHOFLONGESTSUBSTRING_H

class S4 {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        map<char,int> mpp;
        int cnt = 1,l = 0;
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(mpp.find(c) != mpp.end()){
                l = mpp[c] + 1;
            }
            int len = i - l + 1;
            cnt = max(cnt,len);
            mpp[c] = i;
        }
        return cnt;
    }
};

#endif //S4_LENGTHOFLONGESTSUBSTRING_H
