// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

// **Example 1:**

// **Input:** s = "Let's take LeetCode contest"

// **Output:** "s'teL ekat edoCteeL tsetnoc"

#include <bits/stdc++.h>
using namespace std;
void fun(stack<char> &st, vector<char> &str)
{
    while (!st.empty())
    {
        str.push_back(st.top());
        st.pop();
    }
}
string reverseWords(string s)
{
    vector<char> str;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == s.length() - 1)
            str.push_back(s[i]);
        if (s[i] == ' ' || i == s.length() - 1)
        {
            fun(st, str);
            if (i != s.length() - 1)
                str.push_back(s[i]);
        }
        else
        {
            st.push(s[i]);
        }
    }
    s.clear();
    string res(str.begin(), str.end());
    return res;
}
int main()
{
    string s = "Let's take leetcode contest";
    string res = reverseWords(s);
    cout<<res;
}