#include<iostream>
using namespace std;

int linearsearch(int *arr,int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,3,5,77,97,32,24,12};
    int n = sizeof(arr)/sizeof(int);

    cout<<linearsearch(arr,n,1)<<endl;
}