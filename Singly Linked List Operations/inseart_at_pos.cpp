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

void insert_at_pos(Node* &head, int inx, int val){
    Node* newnode = new Node(val);
    Node* tem = head;
    for(int i = 0 ; i < inx-1 ; i++){
        tem = tem->next; 
    }
     newnode->next = tem->next;
     tem->next = newnode;

}
void print(Node* head){
    Node* tem = head;
    while(tem != NULL){
        cout << tem->val << endl;
        tem = tem->next;
    }
}
int main(){
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);
    head->next = a;
    a->next = b;
    insert_at_pos(head, 2 ,500);
    print(head);
    return 0; 
}