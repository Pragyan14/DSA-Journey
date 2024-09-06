#include <iostream>
using namespace std;


#ifndef INSERATION_H
#define INSERATION_H



class Insertion {
public:
    void insertionSort(int arr[],int n){
        cout<<"Array before:";
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }

        for(int i = 0;i<n;i++) {
            int j=i;
            while (j>0 && arr[j-1]>arr[j]) {
                swap(arr[j-1],arr[j]);
                j--;
            }
        }

        cout<<"\nArray After:";
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
    }
};



#endif //INSERATION_H
