#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
    node(int x){
        data = x;
        next = NULL;
    }
};

node *insertionAtEnd(node*head, int x){
    node *temp = new node(x);
    if(head == NULL){
        return temp;
    }
    node*curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

void transverseLinkedList(node*head){
    node*curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main(){
    node*head = NULL;
    head = insertionAtEnd(head,10);
    head = insertionAtEnd(head,20);
    head = insertionAtEnd(head,50);

    transverseLinkedList(head);
    return 0;

}