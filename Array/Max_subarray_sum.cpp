#include<iostream>
using namespace std;

int maxsubarraysum1(int *arr,int n){
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
int maxsubarraysum2(int *arr,int n){
    int max_sum = INT16_MIN;
    for(int start= 0 ; start <n; start++){//2
         int currunt_sum=0;
        for(int end=start; end<n ; end++){//3,4,5,6
           currunt_sum += arr[end];
            
            max_sum=max(max_sum,currunt_sum);
        }
    }
    cout<<max_sum;
}

//KADANES ALGORITHAM (MOST IMPORTENT)
int maxsubarraysum3(int *arr, int n){
    int max_sum= INT16_MIN;
    int currunt_sum= 0;

    for(int i=0;i<n;i++){
        currunt_sum +=arr[i];
        max_sum = max(currunt_sum,max_sum);

        if(currunt_sum<0){
            currunt_sum=0;
        }
    }
    cout<<max_sum;
}

int main(){
    int arr[7]={2,-3,6,-4,4,8,3};
    int n=7;

maxsubarraysum3(arr,n);
}