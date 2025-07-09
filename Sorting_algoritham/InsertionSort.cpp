#include<iostream>
using namespace std;
int print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//pick an element from unsorted part & place it correctly in sorted part.
int InsertionSort(int *arr , int n){
    for(int i=0; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >=0 && arr[prev]> curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    print(arr,n);
}
   
int main(){
    int arr[] = {1,4,234,4345,22,11,3,32,54,221,32,53,34,23,23};
    int n= sizeof(arr) / sizeof(int);
    InsertionSort(arr,n);
}