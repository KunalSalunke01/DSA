#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void moveZero(int arr[],int n){
    int j=-1;   
    for(int i=0;i<n;i++){   //get first zero position
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    //if no zoros present
    if(j==-1)   return; 
    //swap non-zero with zeros
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    moveZero(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}