#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int size){
    for (int i=0;i<size-1;i++){
        int mini =i;    //let minimum value at i
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[mini])    mini=j;
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
}

int main(){
    int size;
    cin >> size;    //input array size
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];    //input array elements
    }
    //sorting algo
    selectionSort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";  //print sorted array
    }

    return 0;
}