#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;;
        int n = s.length(),ans = 0,i=0;
        while(i<n){
            char c1 = s[i], c2 = s[i+1];
            if(m[c1] < m[c2] && m[c2] != 0){
                ans = ans + (m[c2] - m[c1]);
                i+=2;
            }
            else{
                ans = ans + m[c1];
                i++;
            }
        }
        return ans;
    }

int main(){
    cout<<romanToInt("I");
}