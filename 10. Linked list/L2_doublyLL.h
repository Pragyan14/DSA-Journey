#include<bits/stdc++.h>
using namespace std;

#ifndef L2_DOUBLYLL_H
#define L2_DOUBLYLL_H

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    Node(int x) { data = x; next = prev = NULL; }
};

void display(Node *n) {
    while(n != nullptr) {
        cout<<n->data<<" ";
        n = n->next;
    }
}

class llf {
public:
    void display(Node *n) {
        while(n != nullptr) {
            cout<<n->data<<" ";
            n = n->next;
        }
    }
public:
    Node *addNode(Node *head, int pos, int data) {

        Node* temp = head;

        for(int i=0;i<pos && temp->next != nullptr;i++){
            temp = temp->next;
        }

        Node* newNode = new Node(data);

        if(temp->next == nullptr){
            temp->next = newNode;
            newNode-> prev = temp;
            return head;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        newNode->next->prev = newNode;
        temp->next = newNode;

        return head;
    }

};
#endif //L2_DOUBLYLL_H
