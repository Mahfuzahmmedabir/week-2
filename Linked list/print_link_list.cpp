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
void insert_at(Node* &head, int val){
    Node* newnode = new Node(val);
    Node* tem = head;

    while(tem !=head){
        tem = tem->next;
    }
    tem->next = newnode;


}

void print(Node* head){

    Node* tem = head;
    while(tem != head){
        cout << tem->val << endl;
        head = tem->next;
    }

}

int main(){
    Node* head = new Node(200);
    Node* a = new Node(200);
    Node* b = new Node(300);
    Node* c = new Node(800);

    head->next = a;
    a->next = b;
    b->next = c;

    insert_at(head,1000);
    print(head);

   
    return 0; 
}

