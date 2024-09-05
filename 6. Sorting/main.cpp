#include <iostream>
#include "Selection.h"
using namespace std;



int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    Selection s;
    s.display(arr,n);
    return 0;
}
