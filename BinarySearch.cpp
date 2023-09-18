#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int key=7;
    int low=0;
    int high=9;
    while(low<=high){
       int mid=low+(high-low)/2;
       if(arr[mid]==key){
         cout<<key;
         break;
       }
       else if(arr[mid]<key)
       low=mid+1;
       else if(arr[mid]>key)
       high=mid-1;
    }
    
}