#include<bits/stdc++.h>
using namespace std;

// pivot function   --> to get pivot
int pivotFun(int arr[],int low,int high){
    int i = low;
    int j = high;
    int pivot = arr[low];

    while(i<j){

        while(arr[i]<=pivot && i<high){
            i++;
        }
        while (arr[j]>pivot && j>low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
        
    }
    swap(arr[low],arr[j]);
    return j;
}

// quick Sort 
void quickSort(int arr[],int low,int high){
    if (low<high)
    {
        int pIndex = pivotFun(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);

    }
}

int main(){
    int size;
    cin >> size;    //input array size
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];    //input array elements
    }
    //quick sort algo
    quickSort(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";  //print sorted array
    }

    return 0;
}