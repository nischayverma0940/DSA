//Array implementation of queue
#include<iostream>
using namespace std;
int queue[5],n=5,front=-1,rear=-1;
void insert(){
    int val;
    if(rear == n-1){
        cout<<"Queue overflow"<<endl;
    }
    else{
        if(front==-1){
            front=0;
        }
        cout<<"Insert the element in queue:";
        cin>>val;
        rear++;
        queue[rear]=val;
    }
}
void display(){
    if(front==-1){
        cout<<"Queue is Empty!!!"<<endl;
    }
    else{
        cout<<"Queue elements are:";
        for(int i=front;i<rear;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int ch;
    cout<<"Enter 1 to insert"<<endl<<"Enter 2 to Delete";
    cout<<"Enter 3 to display"<<endl<<"Enter 4 to exit";
    do{
        cout<<"Enter your choice:"<<endl;
        cin>>ch;
        switch(ch){
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:cout<<"Exit";
            break;
            default:cout<<"Invalid Choice"<<endl;
        }
    }
    while(ch!=4);
}