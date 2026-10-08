#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
vector<string> v;
    while(ss>>temp){
    v.push_back(temp);
   
    }
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<endl;
// }

sort(v.begin(),v.end());
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<endl;
// }
int maxcount = 1;
int count =1;
for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]){count++;}
    else{count = 1;}
    maxcount = max(maxcount , count);
}
cout<<maxcount;
count = 1;
for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]){count++;}
    else{count = 1;}
    
    if(count == maxcount){
        cout<<v[i]<<" "<<maxcount;
    }
}
}/// stoi() strin to int conversion
// stoll() string to long long conversion