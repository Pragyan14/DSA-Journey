#include <iostream>

#include "Bubble.h"
#include "Insertion.h"
#include "Merge.h"
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
    // Bubble b;
    // b.bubbleSort(arr,n);
    // Selection s;
    // s.display(arr,n);
    // Insertion i;
    // i.insertionSort(arr,n);
    Merge m;
    m.display(arr);
    cout<<"\n";
    m.mergeSort(arr,0,n-1);
    m.display(arr);
    return 0;
}
