#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void lRotate(int arr[],int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    lRotate(arr,size);

    cout<<"Left rotated array by 1:\n";
    for(int i=0;i<size;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}