#include<iostream>
#include<string.h>
using namespace std;

void display(string str){
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
}
int main(){
  string s = "sonu kunwar rao";

  for(int i=0,j=s.length()-1;j>=i;i++,j--){
    int temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
 display(s);
 s[0]='r';
 display(s);
// reverse first half of the string
for(int i=0,j=(s.length())/2;j>=i;i++,j--){
    int temp = s[i];
    s[i]= s[j];
    s[j]= temp;
}

display(s);
}