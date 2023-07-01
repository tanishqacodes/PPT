// An integer array original is transformed into a **doubled** array changed by appending **twice the value** of every element in original, and then randomly **shuffling** the resulting array.

// Given an array changed, return original *if* changed *is a **doubled** array. If* changed *is not a **doubled** array, return an empty array. The elements in* original *may be returned in **any** order*.

// **Example 1:**

// **Input:** changed = [1,3,4,2,6,8]

// **Output:** [1,3,4]

// **Explanation:** One possible original array could be [1,3,4]:

// - Twice the value of 1 is 1 * 2 = 2.
// - Twice the value of 3 is 3 * 2 = 6.
// - Twice the value of 4 is 4 * 2 = 8.

// Other original arrays could be [4,3,1] or [3,1,4].
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> changed(n);
    for (int i = 0; i < n; i++)
        cin >> changed[i];

    if (n % 2 != 0)
        cout << " " << endl;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[changed[i]]++;
    }
    sort(changed.begin(), changed.end());
    for (auto x : changed)
    {
        if (mp[x] == 0)
            continue;
        if (mp[2 * x] == 0)
            return {};
        if (mp[x] && mp[2 * x])
        {
            mp[2 * x]--;
            // ans.push_back(x);
            cout << x << " ";
            mp[x]--;
        }
    }
}