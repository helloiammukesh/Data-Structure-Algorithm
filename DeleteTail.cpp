#include<iostream>
using namespace std;

struct node
{
    int data;
    node*next;
    node(int x){
        data = x;
        next = NULL;
    }
};

node* delTail(node*head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    node*curr = head;
    while(curr->next->next != NULL){
        curr = curr->next;
    }

    delete (curr->next);
    curr->next = NULL;
    return head;
}

int main(){
    node *head = new node(10);
    // node *temp1 = new node(20);
    // node *temp2 = new node(30);
    // head->next = temp1;
    // temp1->next = temp2;
    // temp2->next= NULL;
    head = delTail(head);

    node*curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    return 0;

}
