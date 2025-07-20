#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int rmDuplicate(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int uniqEle = rmDuplicate(arr,size);
    cout<<"No of unique elements : "<<uniqEle<<endl;
    for(int i=0;i<uniqEle;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}