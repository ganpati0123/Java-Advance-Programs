#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* next; Node(int v):data(v),next(NULL){} };

Node* reverseList(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr){
        Node* nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}

int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head=reverseList(head);
    while(head){ cout<<head->data<<" "; head=head->next; }
}
