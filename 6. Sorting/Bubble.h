#include <iostream>
using namespace std;

#ifndef BUBBLE_H
#define BUBBLE_H



class Bubble {
public:
    void bubbleSort(int arr[],int n){
        cout<<"Array before:";
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
        for(int i = n-1;i>0;i--) {
            int didSwap = 0;
            for(int j=0;j<i;j++) {
                if(arr[j] > arr[j+1]) {
                    swap(arr[j],arr[j+1]);
                    didSwap = 1;
                }
            }
            if(didSwap == 0) {
                break;
            }
        }
        cout<<"\nArray After:";
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
    }
};



#endif //BUBBLE_H
