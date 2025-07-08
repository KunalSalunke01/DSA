#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while (j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
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
    //insertion sort algo
    insertionSort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";  //print sorted array
    }

    return 0;
}