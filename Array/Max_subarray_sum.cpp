#include<iostream>
using namespace std;

int subarray(int *arr,int n){
    int max_sum = INT16_MIN;
    for(int start= 0 ; start <n; start++){
        for(int end=start; end<n ; end++){
            int currunt_sum=0;
            for(int i=start; i<=end ; i++){
               currunt_sum +=arr[i];
            }
            max_sum=max(max_sum,currunt_sum);
        }
    }
    cout<<max_sum;
}

int main(){
    int arr[6]={2,-3,6,-4,4,8};
    int n=6;

subarray(arr,n);
}