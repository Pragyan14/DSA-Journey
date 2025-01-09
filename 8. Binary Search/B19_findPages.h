#include<bits/stdc++.h>
using namespace std;

#ifndef B19_FINDPAGES_H
#define B19_FINDPAGES_H

// https://www.naukri.com/code360/problems/allocate-books_1090540

class B19 {
public:
    int countStudent(vector<int> arr,int pages) {
        int stu = 1,pagesStudent = 0,n = arr.size();
        for(int i=0;i<n;i++) {
            if(pagesStudent + arr[i]  <= pages) pagesStudent += arr[i];
            else {
                stu++;
                pagesStudent = arr[i];
            }
        }
        return stu;
    }

    int findPages(vector<int>& arr, int n, int m) {
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        if(m > n) return -1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(countStudent(arr,mid) <= m) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};

#endif //B19_FINDPAGES_H
