#include<bits/stdc++.h>
using namespace std;

// merge function   ==> merge sorted array in ascending order
void merge(int arr[],int low,int mid,int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;

    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while (right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    
}

// merge Sort ==>   divide array into 2 parts till get sorted array
void mergeSort(int arr[],int low,int high){
    if(low>=high)   return;
    int mid= (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);

    merge(arr,low,mid,high);
}

int main(){
    int size;
    cin >> size;    //input array size
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];    //input array elements
    }
    //merge sort algo
    mergeSort(arr,0,size-1);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";  //print sorted array
    }

    return 0;
}