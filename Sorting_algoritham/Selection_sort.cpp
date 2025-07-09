#include<iostream>
using namespace std;
int print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//pick the smallest (from unsorted) & put in the beginning
int SelectionSort(int *arr , int n){
    for(int i=0;i<n-1;i++){
       int minIdx = i;
       for(int j=i+1; j<n; j++){
         if(arr[j]<arr[minIdx]){
            minIdx = j;
         }
        }
      swap(arr[i],arr[minIdx]);
    }
    print(arr,n);
}
   
int main(){
    int arr[] = {1,4,234,4345,22,11,3,32,54,221,32,53,34,23,23};
    int n= sizeof(arr) / sizeof(int);
    SelectionSort(arr,n);
}