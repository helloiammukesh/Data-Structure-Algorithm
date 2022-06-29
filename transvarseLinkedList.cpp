#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};

void printList(node *head){
    node* curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

// void printList(node *head){
//     if(head == NULL)
//         return;
//     cout<<(head->data)<<" ";
//     printList(head->next);
// }

int main(){

    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);

    head->next = temp1;
    temp1->next = temp2;

    printList(head);

    int *ptr = new int(10);
    cout<<ptr;
    delete head;
    delete temp1;
    delete temp2;
    
    return 0;


}
