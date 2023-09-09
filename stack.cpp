//Array implementation of stacks
/*#include<iostream>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;
void push(int x){
    if(top == MAX_SIZE-1){
        cout<<"Error:stack overflow";
    }
    A[++top]=x;
}
void pop(){
    if(top == -1){
        cout<<"Error:no element to pop";
    }
    top--;
}
int topElement(){
    return A[top];
}
void print(){
    for(int i=0;i<=top;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    push(2);
    push(5);
    push(10);
    pop();
    push(12);
    print();
}*/

//Linked list implementation of stacks
#include<iostream>
using namespace std;
int top = -1;
struct node{
    int data;
    node* link;
};
node* head;
void push(int x){
    top++;
    node* temp = new node();
    temp->data=x;
    temp->link=head;
    head=temp;
}
void pop(){
    if(top == -1){
        cout<<"Error: Stack Underflow";
    }
    node* temp = new node();
    temp = head;
    head = temp->link;
    delete(temp);
}
void print(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}
int main(){
    head = NULL;
    pop();
    print();
}