// Reverse using iteration
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head;
void reverse(){
    node *current,*prev,*next;
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

// Reverse using recursion
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head;
void reverse(node* p){
    if(p->next == NULL){
        head = p;
        return;
    }
    reverse(p->next);
    node* q = p->next;
    q->next = p;
    p->next = NULL;
}
int main(){
    reverse(head);
}
