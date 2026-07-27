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
    int product = 0;
    for(int i=0;i<n;i++){
        product=product+arr[i];
        cout<<" "<<product;    }
    cout<<"the product of all element in given arrray: "<<product;
}