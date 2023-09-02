#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
};
node* head;
node* GetNewNode(int x){
    node* newNode = new node();
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
}
void InsertAtHead(int x){
    node* newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}
void print(){
    node* temp = head;
    cout<<"Forward:";
    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}
void reversePrint(){
    node* temp = head;
    if(temp == NULL)
    return;
    while(temp->next != NULL){
        temp=temp->next;
    }
    cout<<"Reverse:";
    while(temp != NULL){
        cout<<temp->data;
        temp=temp->prev;
    }
    cout<<endl;
}
int main(){
    head = NULL;
    InsertAtHead(2);
    InsertAtHead(4);
    InsertAtHead(6);
    print();
    reversePrint();
}