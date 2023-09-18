#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,1,2,3,4,10,6,7,8,9};
    for(int i=1;i<10;i++){
        int key = arr[i];
        int j=i-1;
        while(j>0&&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(int m=0;m<10;m++){
        cout<<arr[m];
    }
}