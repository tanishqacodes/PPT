// Given two strings s and t, return true *if they are equal when both are typed into empty text editors*. '#' means a backspace character.

// Note that after backspacing an empty text, the text will continue empty.

// **Example 1:**

// **Input:** s = "ab#c", t = "ad#c"

// **Output:** true

// **Explanation:**

// Both s and t become "ac".

#include <bits/stdc++.h>
using namespace std;
string solve(string s)
{
    vector<char> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '#' && !v.empty())
        {
            v.pop_back();
        }
        else if (s[i] == '#' && v.empty())
        {
            continue;
        }
        else
        {
            v.push_back(s[i]);
        }
    }
    string ans;
    for (auto x : v)
    {
        ans += x;
    }
    return ans;
}
bool backspaceCompare(string s, string t)
{
    string a = solve(s);
    string b = solve(t);
    if (a == b)
        return true;
    return false;
}
int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;
    cout<<backspaceCompare(s,t);
}