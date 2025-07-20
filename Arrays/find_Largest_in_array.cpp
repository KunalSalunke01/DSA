#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int largest(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest)  largest = arr[i];
    }
    return largest;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Largest Element\n"<<largest(arr,size);
    return 0;
}