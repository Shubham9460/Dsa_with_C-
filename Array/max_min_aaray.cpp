#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,3,131,324,5453,135,65787,565};
    int n = sizeof(arr)/sizeof(int);

    int min = arr[0];
    for(int i=0; i<n ;i++){
        if(arr[i]<min){
            min= arr[i];
        }
    }
     int max = arr[0];
    for(int i=0; i<n ;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    cout<<"minimum "<<min<<endl;
    cout<<"max"<<max<<endl;
}