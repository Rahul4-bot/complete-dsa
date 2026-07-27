#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows";
    cin >>n;
    int m;
    cout<<"Enter number of column";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>arr[i][j];
      }cout<<endl;
    }
    
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cout<<arr[i][j];
      }cout<<endl;
    }

    // new arraytranspose
    int brr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            brr[i][j]=arr[j][i];
        }
    }
    //print transpose matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j];
        }cout<<endl;
    }
}