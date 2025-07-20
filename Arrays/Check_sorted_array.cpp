#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool checkSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Is array Sorted\n"<<checkSorted(arr,size);
    return 0;
}