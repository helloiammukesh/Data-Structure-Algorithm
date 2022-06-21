#include<iostream>
using namespace std;

struct node
{
    /* data */
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};

node* insAtBeg(node* head, int x){
    node *temp = new node(x);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
    }
}

int main(){
    node*head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;

    head = insAtBeg(head,40);

    node*curr = head;
    do{
        cout<<curr->data<<" ";
        curr = curr->next;
    }while(curr != head);

    return 0;
}
