#include <iostream>

#include "Bubble.h"
#include "Insertion.h"
#include "Selection.h"
using namespace std;



int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    // Bubble b;
    // b.bubbleSort(arr,n);
    // Selection s;
    // s.display(arr,n);
    Insertion i;
    i.insertionSort(arr,n);
    return 0;
}
