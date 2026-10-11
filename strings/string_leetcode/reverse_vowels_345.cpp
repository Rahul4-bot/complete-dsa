// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

// Example 1:

// Input: s = "IceCreAm"

// Output: "AceCreIm"

// Explanation:

// The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

// Example 2:

// Input: s = "leetcode"

// Output: "leotcede"

#include<iostream>
using namespace std;
 bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return true;
        }
      else{ return false ;}
    }

int main(){
    
   
 string s ;
 getline(cin , s);

 int n = s.length();
 int first = 0;
 int last = n-1;
 while(last>=first){
    if(isvowel(s[first]) && isvowel(s[last])){
        swap(s[first],s[last]);
        first++;
        last--;
    }
    else if(isvowel(s[first])){
        first++;
    }
    else if(isvowel(s[last])){
        last--;
    }
    else{
        first++;
        last--;
    }
 }
 cout<<s;
}