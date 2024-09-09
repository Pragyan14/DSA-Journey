#include <iostream>
#include <vector>
using namespace std;


#ifndef INSERATION_H
#define INSERATION_H



class Insertion {
public:
    void insertionSort(vector<int> &arr,int n){
        for(int i = 0;i<n;i++) {
            int j=i;
            while (j>0 && arr[j-1]>arr[j]) {
                swap(arr[j-1],arr[j]);
                j--;
            }
        }
    }
    void ris(vector<int> &arr,int n) {
        if(n<=1) return;

        ris(arr,n-1);

        int j=n-2;
        while(j>0 && arr[j-1]>arr[j]) {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
};



#endif //INSERATION_H
