// Given two strings s and t, *determine if they are isomorphic*.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// **Example 1:**

// **Input:** s = "egg", t = "add"

// **Output:** true


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s , t;
    cin >> s;
    cin >> t;
    unordered_map<char, int> map_s;
    unordered_map<char, int> map_t;
    for (int i = 0; i < s.length(); i++)
    {
        if (map_s[s[i]] != map_t[t[i]])
        {
            cout << "false";
            return 0;
        }
        map_s[s[i]] = i + 1;
        map_t[t[i]] = i + 1;
    }
    cout << "true";
}