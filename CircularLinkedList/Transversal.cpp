#include<iostream>
using namespace std;

struct node
{
    /* data */
    int data;
    node*next;
    node(int x){
        data = x;
        next = NULL;
    }
};

void tranverse(node*head){
    if(head == NULL){
        return;
    }
    node*curr = head;
    do
    {
        /* code */
        cout<<curr->data<<" ";
        curr = curr->next;
        
    } while (curr != head);


    
}

int main(){

    node*head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;

    tranverse(head);

    return 0;
}



