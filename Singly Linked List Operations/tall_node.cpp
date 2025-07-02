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
void insert_at_tail(Node* &head, Node* &tail, int val){
  Node* newnode = new Node(val);
  if(head == NULL){
    head = newnode;
    return;
  }
   Node* tem = head;
  tail->next = newnode;
  tail = tail->next;
}
void print_head(Node* head){
    Node* tem = head;
    while(tem != NULL){
        cout << tem->val << endl;
        tem = tem->next;
    }
}
int main(){
    Node* head = new Node(100);
    Node* a =  new Node(200);
    Node* tail = new Node(300);
    head->next = a;
    a->next = tail;

    insert_at_tail(head,tail, 800);
    print_head(head);


    return 0; 
}
