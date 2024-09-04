#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void explainPairs() {
    pair<int, int> p1 = {1, 2};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int> > p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.second << endl;

    pair<int, int> p3[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << p3[0].second << endl;
}

void explainVector() {
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);

    vector<pair<int, int> > v2;
    v2.push_back({1, 2});
    v2.emplace_back(3, 4);

    vector<int> v3 = {5, 100}; //{ 100,100,100,100,100 }

    vector<int> v4 = {12, 13, 14, 15, 16}; // { 0,0,0,0,0 }
    vector<int> v5(v3);

    vector<int>::iterator element = v4.begin();
    cout << *(element) << endl;
    cout << *(++element) << endl;

    for (auto element: v4) {
        cout << element << " ";
    }
    cout << endl;
    // Insert function

    vector<int> v6 = {200, 300}; //  {200,300}
    v6.insert(v6.begin(), 100); // {100,200,300}
    v6.insert(v6.end(), 400); // {100,200,300,400}

    cout << v6.size(); // 4

    v6.pop_back(); // {100,200,300}
}

void explainList() {
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(3); //{2,3}

    ls.push_front(1);   //{1,2,3}

    //rest function same as vector
}

void explainStack() {
    stack<int> st;

    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4); //{4,3,2,1}
    st.push(5); //{5,4,3,2,1}

    cout<<st.top()<<endl; // 5
    st.pop();
    cout<<st.top()<<endl; // 4
    cout<<st.empty(); // 0 (false)
}

int main() {
    explainStack();
    return 0;
}
