#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int size;
    cin >> size;    //input array size
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];    //input array elements
    }
    //bubble sort algo
    bubbleSort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";  //print sorted array
    }

    return 0;
}