#include <iostream>

#include "Bubble.h"
#include "Insertion.h"
#include "Merge.h"
#include "Quick.h"
#include "Selection.h"
using namespace std;



int main() {
    int n,x;
    cin>>n;
    // int arr[n];
    vector<int> arr;
    for(int i=0;i<n;i++) {
        cin>>x;
        arr.push_back(x);
    }
    for(auto it : arr) {
        cout<<it<< " ";
    }
    cout<<endl;
    // Bubble b;
    // b.bubbleSort(arr,n);
    // Selection s;
    // s.display(arr,n);
    Insertion i;
    i.ris(arr,n);
    // Merge m;
    // cout<<"\n";
    // m.mergeSort(arr,0,n-1);
    // m.display(arr);
    Quick q;
    q.quickSort(arr,0,n-1);
    for(auto it : arr) {
        cout<<it<< " ";
    }
    return 0;
}
