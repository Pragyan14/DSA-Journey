#include <iostream>
using namespace std;

#ifndef QUICK_H
#define QUICK_H



class Quick {
public:
    void quickSort(vector<int> &arr,int low,int high) {
        if(low<high) {
            int partition = pIndex(arr,low,high);
            quickSort(arr,low,partition-1);
            quickSort(arr,partition+1,high);
        }
    }
    int pIndex(vector<int> &arr,int low,int high) {
        int pivot = arr[low];
        int i=low;
        int j=high;
        while(i<j) {
            while (arr[i] <= pivot && i<=high-1) {
                i++;
            }
            while (arr[j] > pivot && j >= low + 1) {
                j--;
            }
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
};



#endif //QUICK_H
