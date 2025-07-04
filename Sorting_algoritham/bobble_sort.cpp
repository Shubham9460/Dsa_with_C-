#include<iostream>
using namespace std;
int print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bobble_sort(int *arr, int n){

    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            } 
        }   
        // if(!isSwap){
        //     return;
        // }
    }
    print(arr,n);
}
int main(){
    int arr[5] = {2,5,3,1,4};
    int n=5;
    bobble_sort(arr,n);
}