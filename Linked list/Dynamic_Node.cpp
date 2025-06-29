#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new  Node(300);

    head->next = a;
    a->next = b;
    cout << head->val<< " ";
    cout << head->next->val << " ";
    cout << head->next->next->val;
    return 0; 
}