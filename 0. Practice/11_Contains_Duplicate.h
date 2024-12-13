#include<bits/stdc++.h>
using namespace std;


#ifndef INC_11_CONTAINS_DUPLICATE_H
#define INC_11_CONTAINS_DUPLICATE_H

class duplicate {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> st;
        for(int num : nums) {
            if(st.count(num)) return true;
            st.insert(num);
        }
        return false;
    }
};

#endif //INC_11_CONTAINS_DUPLICATE_H
