//Inserting at the end of the linked list
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head;
void push(int insert){
    node* temp = new node();
    node* last = head;
    temp->data=insert;
    temp->next=NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    while(last->next != NULL){
        last=last->next;
    }
    last->next=temp;
    return;
}
void print(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    head = NULL;
    int n, insert;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>insert;
        push(insert);
    }
    print();
}