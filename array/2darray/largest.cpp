#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of row";
    cin>>n;
    int m;
    cout<<"Enter number of column";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        } cout<<endl;
    }
    int max=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<max;
}