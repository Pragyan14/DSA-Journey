#include<bits/stdc++.h>
using namespace std;

#ifndef L1_BASIC_H
#define L1_BASIC_H

class Node {

public:
    int data;
    Node* next;

public:
    Node(int data) {
        this->data = data;
        next = nullptr;
    }

public:
    Node() {
        this->data = 0;
        next = nullptr;
    }
};

#endif //L1_BASIC_H
