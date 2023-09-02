//Deleting nth element of the linked list
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head;
void insert(int data, int n){
    node* temp1 = new node();
    temp1->data=data;
    temp1->next=NULL;
    if(n==1){
        temp1->next = head;
        head = temp1;
        return;
    }
    node* temp2 = head;
    for(int i=0;i<n-2;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void print(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
void Delete(int n){
    node* temp1 = head;
    if(n==1){
        head = temp1->next;
        delete temp1;
        return;
    }
    for(int i=0;i<n-2;i++){
        temp1=temp1->next;
    }
    node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
}
int main(){
    head = NULL;
    insert(2,1); // 2
    insert(3,2); // 2,3 
    insert(4,1); // 4,2,3
    insert(5,2); // 4,5,2,3
    print();
    Delete(2);
    print(); // 4,2,3
}