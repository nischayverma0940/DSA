//print using recursion
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void print(node* p){
    if(p==NULL) //Exit condition
    return;
    cout<<p->data; //First print the value in the node
    print(p->next); //Recursive call
    // Reverse statements at 11 and 12 it will print the linked list in reverse order
}
int main(){
    node* head = NULL;
    print(head);

}