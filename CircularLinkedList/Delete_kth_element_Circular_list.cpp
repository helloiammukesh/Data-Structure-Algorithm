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

void print(node*head){
    node *curr = head;
    while(curr->next != head){
        cout<<curr->data<<" ";
        curr = curr->next;
    }

    cout<<curr->data;

}

node *DeleteHead(node*head){
    if(head == NULL)
        return NULL;
    if(head->next == head){
        return NULL;
    }
    head->data = head->next->data;
    node *temp = head->next;
    head->next = head->next->next;
    delete temp;

    return head;
    
}

node* DeleteKth(node* head, int k){
    if(head == NULL){
        return NULL;
    }
    if(k==1){
        return DeleteHead(head);
    }
    node* curr = head;
    for(int i = 0; i<k-2;i++)
        curr = curr->next;
    
    node*temp = curr->next;
    curr->next = curr->next->next;
    delete temp;

    return head;
}

int main(){
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = head;

    print(head);
    head = DeleteKth(head,3);
    cout<<"\n";
    print(head);
    return 0;
}
