// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears **once** or **twice**, return *an array of all the integers that appears **twice***.

// You must write an algorithm that runs in O(n) time and uses only constant extra space.

// **Example 1:**

// **Input:** nums = [4,3,2,7,8,2,3,1]

// **Output:**

// [2,3]

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin >> nums[i];
    unordered_map<int, int> mp;
    for (auto i : nums)
    {
        mp[i]++;
    }
    for (auto j : mp)
    {
        if (j.second > 1)
            cout << j.first <<" ";
    }
}