#include <iostream>
using namespace std;

#include "L2_doublyLL.h"

int main() {
    // vector<int> nums = {1,2,3,4,5};
    //
    // Node* head = new Node(nums[0]);
    //
    // for(int i=1;i<nums.size();i++) {
    //     Node* mover = head;
    //     Node* temp = new Node(nums[i]);
    //     mover->next = temp;
    //     mover = temp;
    // }
    //
    // cout<<head->data;

    vector<int> arr = {2,4,5};
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* newNode = new Node(arr[i]);
        mover->next = newNode;
        newNode->prev = mover;
        mover = newNode;
    }

    llf llf;
    Node* temp = llf.addNode(head,2,6);

    display(temp);

    return 0;
}
