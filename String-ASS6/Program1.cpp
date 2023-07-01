// A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:

// - s[i] == 'I' if perm[i] < perm[i + 1], and
// - s[i] == 'D' if perm[i] > perm[i + 1].

// Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return **any of them**.

// **Example 1:**

// **Input:** s = "IDID"

// **Output:**

// [0,4,1,3,2]

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> ans;
    int l = 0, h = n;
    for (auto x : s)
    {
        if (x == 'I')
        {
            ans.push_back(l++);
        }
        else if (x == 'D')
        {
            ans.push_back(h--);
        }
    }
    ans.push_back(l);
    for(auto x:ans){
        cout<<x<<" ";
    }
}