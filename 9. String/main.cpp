#include <iostream>
using namespace std;

#include "S3_largestOddNumber.h"

int main() {

    S3 s3;
    string s = s3.largestOddNumber("52");
    cout<<s;

    // S2 s2;
    // string s = s2.reverseWords("  hello world");
    // cout<<s;

    // S1 s1;
    // string s = s1.removeOuterParentheses("(()())(())");
    // cout<<s;

    return 0;
}
