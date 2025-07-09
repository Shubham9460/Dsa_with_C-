#include<iostream>
using namespace std;
int print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// Large element come to end by swapping with adjacent
void bobble_sort(int *arr, int n){

    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            } 
        }   
        // if(isSwap == false){
        //     return;
        // }
    }
    print(arr,n);
}
int main(){
    int arr[] = {2,5,3,1,4,234,4345,22,11,3,32,54,221,32,53,34,23,23};
    int n= sizeof(arr) / sizeof(int);
    bobble_sort(arr,n);
}