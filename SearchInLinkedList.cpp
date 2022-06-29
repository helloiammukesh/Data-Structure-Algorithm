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

int search(node*head, int x){
    node*curr = head;
    int pos = 1;

    while(curr!=NULL){
        if(curr->data == x)
            return pos;
        else{
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}

int main(){
    node*head = new node(10);
    node*temp1 = new node(20);
    node*temp2 = new node(30);
    node*temp3 = new node(40);
    node*temp4 = new node(50);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = NULL;

    node*curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr= curr->next;
    }


    cout<<"\nValue at pos: "<<search(head,30);
    return 0;
}
