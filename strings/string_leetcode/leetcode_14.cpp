// 14. Longest Common Prefix
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

/// sort krenge phir first and last comparison krenge
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    vector<string> strs;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        strs.push_back(s);
    }
    sort(strs.begin(),strs.end());
    string first=strs[0];
    string last=strs[n-1];
    int i=0;
    while(i<first.length() && i<last.length() && first[i]==last[i]){
        i++;
    }
    cout<<first.substr(0,i);//dubara krna h
}