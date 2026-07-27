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
    int max= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max;
    int sec_max =arr[0];
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]>sec_max && arr[i]!= max) sec_max = arr[i];
        else if(sec_max==max) flag = true;
    }
    if(flag==true){cout<<"second maximum element doe not found";}
    else cout<<sec_max;
}