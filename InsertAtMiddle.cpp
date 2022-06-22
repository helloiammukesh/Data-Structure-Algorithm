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

node* insAtPos(node*head,int pos,int x){
    node*temp = new node(x);
    if(pos == 1){
        temp->next = head;
        return temp;
    }

    node*curr = head;
    for(int i = 1; i<=(pos-2)&&curr!=NULL;i++){
        curr = curr->next;
    }
    if(curr == NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
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
        curr = curr->next;
    }
    cout<<endl;

    head = insAtPos(head,4,60);

    curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr = curr->next;
    }

    return 0;

}
