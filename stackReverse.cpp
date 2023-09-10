// Reverse a string using stack
#include<iostream>
#include<stack>
using namespace std;
/*class stack{
    private:
    char A[101];
    int top;
    public:
    void push(int x);
    void pop();
    int top();
    bool isEmpty();
};*/
void reverse(char c[],int n){
    stack<char> S;
    for(int i=0;i<n;i++){
        S.push(c[i]);
    }
    for(int i=0;i<n;i++){
        c[i]= S.top();
        S.pop();
    }

}
int main(){
    char c[51];
    cout<<"Enter a string:";
    gets(c);
    reverse(c,strlen(c));
    cout<<"output:"<<c;
}

//Reverse a linked list using stack
