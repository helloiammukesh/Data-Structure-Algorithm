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

int main(){
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = NULL;
    cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data;
    delete head;
    delete temp1;
    delete temp2;
    return 0;
}