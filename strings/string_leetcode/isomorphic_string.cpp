
// Code important
// Testcase
// Testcase
// Test Result
// 205. Isomorphic Strings
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

// Example 1:

// Input: s = "egg", t = "add"

// Output: true

// Explanation:

// The strings s and t can be made identical by:

// Mapping 'e' to 'a'.
// Mapping 'g' to 'd'.
// Example 2:

// Input: s = "f11", t = "b23"

// Output: false

// Explanation:

// The strings s and t can not be made identical as '1' needs to be mapped to both '2' and '3'.

// Example 3:

// Input: s = "paper", t = "title"

// Output: true

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);

    if (s.length() != t.length()) {
        cout << false;
        return 0;
    }

    vector<int> r(150, 1000);

    for (int i = 0; i < s.length(); i++) {
        int idx = (int)s[i];

        if (r[idx] == 1000) {
            r[idx] = s[i] - t[i];
        }
        else if (r[idx] != s[i] - t[i]) {
            cout << false;
            return 0;
        }
    }

    fill(r.begin(), r.end(), 1000);

    for (int i = 0; i < t.length(); i++) {
        int idx = (int)t[i];

        if (r[idx] == 1000) {
            r[idx] = t[i] - s[i];
        }
        else if (r[idx] != t[i] - s[i]) {
            cout << false;
            return 0;
        }
    }

    cout << true;
    return 0;
}