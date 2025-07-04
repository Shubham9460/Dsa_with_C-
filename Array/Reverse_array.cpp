#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    //using extra speac
//     int copyarr[n];

//     for(int i=0 ; i<n; i++){
//         int j = n-i-1;
//         copyarr[i]= arr[j];
//     }

//     for(int i=0; i<n;i++){
//         arr[i]=copyarr[i];
//     }


// for(int i=0 ; i<n; i++){
//     cout<<arr[i]<<",";
// }
// cout<<endl;

//withour extra speace
int start=0,end=n-1;
while (start<end)
{
swap(arr[start],arr[end]);
start++;
end--;
}
for(int i=0 ; i<n; i++){
    cout<<arr[i]<<",";
}
cout<<endl;
}