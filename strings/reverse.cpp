#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    for(int i=0,j=n; i>=j;i++,j--){
        char temp = s[i];
        s[i]=s[j];
        s[j]=temp;

    }
    cout<<s;

}