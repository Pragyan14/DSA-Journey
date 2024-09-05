#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void learnMap() {
    map<int,int> mpp;
    int arr[] = {3,4,1,5,2,1,2,1};
    int len = sizeof(arr)/sizeof(int);
    for(int i=0;i<len;i++) {
        mpp[arr[i]]++;
    }
    int maxFreqElement = 0;
    int maxFreq = 0;
    for(auto &it: mpp) {
        if(it.second > maxFreq ) {
            maxFreqElement = it.first;
            maxFreq = it.second;
        }
    }
    cout<<"Max freq element is "<<maxFreqElement;
}

int main() {

    learnMap();
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++) {
    //     cin>>arr[i];
    // }
    //
    // // precompute
    // int hash[13] = {0};
    // for (int i=0;i<n;i++) {
    //     hash[arr[i]] += 1;
    // }
    //
    // int q;
    // cin>>q;
    // while(q--) {
    //     int num;
    //     cin>>num;
    //   //   fetchin
    //     cout<<hash[num]<<endl;
    // }

    // string s = "adpkmdanoca";
    // // precomputr
    // int hash[26] = {0};
    // for(int i=0;i<s.size();i++) {
    //     hash[s[i] - 'a']++;
    // }
    // int q;
    // cin>>q;
    // while (q--) {
    // char c;
    // cin>>c;
        // cout<<hash['g' - 'a']<<endl;
    // }
    return 0;
}
