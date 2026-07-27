#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the $i element of array";
        cin>>arr[i];
    }
    int x;
    cout<<"Enter target element";
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag=true;
        }
    }
    if(flag==true)cout<<"ellement is found ";
    else cout<<"element not found";
    
    

}