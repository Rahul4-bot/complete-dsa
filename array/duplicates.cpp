#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=(n-1);j>=0;j--){
            if(arr[i]==arr[j]) flag=true;
        }
    }
    if(flag==true){
        cout<<"duplicate value on";
    }

}