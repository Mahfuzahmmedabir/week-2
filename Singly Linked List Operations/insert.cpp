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

void  insert_at_head(Node* &head, int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;

}
void print_node(Node* head){
    Node* tem = head;
    while(tem != NULL){
        cout << tem->val << endl;
        tem =  tem->next;
    }
}
int main(){
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);

    head->next =a;
    a->next = b;


    insert_at_head(head,500);
    insert_at_head(head,600);
    insert_at_head(head,700);
    print_node(head);
    
    return 0; 
}