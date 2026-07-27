#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the ize of an array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the max element of array: "<<max;
    int sec_max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>sec_max || arr[i]!= max){
            sec_max=arr[i];
        }
    }
    cout<<"the second maximum element of array is :"<<sec_max;
}