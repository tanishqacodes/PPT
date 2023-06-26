// Move Zeroes
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

// Example 2:
// Input: nums = [0]
// Output: [0]

// Constraints:
// a. 1 <= nums.length <= 10^45
// b. -2^31 <= nums[i] <= 2^31 - 1

#include <bits/stdc++.h>
using namespace std;
void moveZeros(vector<int> &nums)
{
    int p = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[p++] = nums[i];
        }
    }
    while (p < nums.size())
    {
        nums[p++] = 0;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    moveZeros(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}