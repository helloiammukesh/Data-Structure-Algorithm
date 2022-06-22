#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

node* deleteHead(node*head){
    if(head == NULL)
        return NULL;
    node*temp = head->next;
    delete head;
    return temp;
}

int main(){
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = NULL;
    cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data<<endl;
    head = deleteHead(head);

    node* curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }

    return 0;
}
