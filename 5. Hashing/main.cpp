#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void learnMap() {
    map<int,int> mpp;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];

        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--) {
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
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
