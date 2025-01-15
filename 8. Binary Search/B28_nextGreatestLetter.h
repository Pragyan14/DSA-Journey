#include<bits/stdc++.h>
using namespace std;

#ifndef B28_NEXTGREATESTLETTER_H
#define B28_NEXTGREATESTLETTER_H

// https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class B28 {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int low = 0, high = n-1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(letters[mid] <= target) low = mid + 1;
            else high = mid - 1;
        }
        return (low >= n)?letters[0]:letters[low];
    }
};

#endif //B28_NEXTGREATESTLETTER_H
