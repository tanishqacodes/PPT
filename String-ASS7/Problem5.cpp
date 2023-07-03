
// 💡 **Question 5**

// Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.

// If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.

// **Example 1:**

// **Input:** s = "abcdefg", k = 2

// **Output:**

// "bacdfeg"

#include <bits/stdc++.h>
using namespace std;
string reverseStr(string s, int k)
{
    int i = 0;
    int j = min(k, (int)s.length());
    while (i < s.length())
    {
        reverse(s.begin() + i, s.begin() + j);
        i += 2 * k;
        j = min(k + i, (int)s.size());
    }
    return s;
}
int main()
{
    string s;
    cout << "Enter string" << endl;
    cin >> s;
    int k;
    cout << "Enter k to reverse" << endl;
    cin >> k;
    cout << reverseStr(s, k);
}