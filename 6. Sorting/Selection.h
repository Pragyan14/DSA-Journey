#include <iostream>
using namespace std;
#ifndef SELECTION_H
#define SELECTION_H



class Selection {
public:
    void display(int arr[],int n) {
        cout<<"Array before:";
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<=n-2;i++) {
            int mini = i;
            for(int j=i;j<=n-1;j++) {
                if(arr[j] < arr[mini]) mini = j;
            }
            swap(arr[mini],arr[i]);
        }
        cout<<"\nArray After:";
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
    }
};



#endif //SELECTION_H
