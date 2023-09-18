#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
    for(int k=0;k<N-1;k++){
        int index=k;
        for(int j=k+1;j<N;j++){
        if(arr[index]>arr[j]){
            index=j;
        }
    }
    swap(arr[k],arr[index]);
    }
    for(int o=0;o<N;o++){
        cout<<arr[o];
    }
}