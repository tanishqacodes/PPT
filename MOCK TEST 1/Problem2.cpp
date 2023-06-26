// First Unique Character in a String

// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

// Example 1:
// Input: s = "leetcode"
// Output: 0

// Example 2:
// Input: s = "loveleetcode"
// Output: 2

// Example 3:
// Input: s = "aabb"
// Output: -1

// Constraints:
// a. 1 <= s.length <= 10^5
// b. s consists of only lowercase English letters.
#include<bits/stdc++.h>
using namespace std;
int firstUniqChar(string s)
{

    int ct[26] = {0};
    for (int i = 0; i < s.length(); i++)
        ct[s[i] - 'a']++;

    for (int i = 0; i < s.length(); i++)
        if (ct[s[i] - 'a'] == 1)
            return i;
    return -1;
}
int main(){
    string s;
    cin >> s;
    cout << firstUniqChar(s);
}