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
    tail = newnode;
    return;
  }

  tail->next = newnode;
  tail = newnode;
}
void print_head(Node* head){
    Node* tem = head;
    while(tem != NULL){
        cout << tem->val << endl;
        tem = tem->next;
    }

    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true){
        cin >> val;
      if(val == -1){
        break;
      }

      insert_at_tail(head,tail, val);
    }

    print_head(head);


    return 0; 
}
