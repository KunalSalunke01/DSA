#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int sLargest(int arr[],int n){
    int largest=arr[0];
    int sLargest = -1;      //if no second largest element
    for(int i=0;i<n;i++){
        if(arr[i]>largest)  {
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Second Largest Element\n"<<sLargest(arr,size);
    return 0;
}