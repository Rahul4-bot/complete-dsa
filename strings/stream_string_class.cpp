#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string s = "i am bellionaire         in my own way";
    stringstream ss(s);// string ko stream mtlb individual word me convert kiya h
    string temp;// ss input de rha h temp ko

    while(ss>>temp){
        cout<<temp<<endl;
    }
   

}