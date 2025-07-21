#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Bruteforce
void leftRotate(int arr[],int n,int d){
    d = d%n;    //for d greater than size of array ---> multiple of n gives same array
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];    //shifting element after d-1 places to front
    }
    for(int i= n-d;i<n;i++){
        arr[i]=temp[i-n+d];     //i-n+d gives 0 then 1,2...
    }
}

//Optimal
void leftRotateOp(int arr[],int n,int d){   // no extra space sc-->O(1)
    d = d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    leftRotateOp(arr,size,3);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}