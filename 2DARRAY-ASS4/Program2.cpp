// Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

// - answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
// - answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

// **Note** that the integers in the lists may be returned in **any** order.

// **Example 1:**

// **Input:** nums1 = [1,2,3], nums2 = [2,4,6]

// **Output:** [[1,3],[4,6]]

// **Explanation:**

// For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].

// For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].

#include <bits/stdc++.h>
using namespace std;
bool find(int k , vector<int> v){
        for(auto x:v){
            if(x == k){
                return true;
            }
        }
        return false;
    }
int main()
{
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};
    vector<vector<int>> ans(2);
    set<int> n1;
    for (auto x : nums1)
    {
        if (!find(x, nums2))
        {
            n1.insert(x);
        }
    }
    for (auto x : n1)
    {
        ans[0].push_back(x);
    }
    n1.clear();
    for (auto x : nums2)
    {
        if (!find(x, nums1))
        {
            n1.insert(x);
        }
    }
    for (auto x : n1)
    {
        ans[1].push_back(x);
    }
    n1.clear();
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < ans[1].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}