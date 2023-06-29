
// 💡 Given an integer array nums sorted in **non-decreasing** order, return *an array of **the squares of each number** sorted in non-decreasing order*.

// **Example 1:**

// Input: nums = [-4,-1,0,3,10]

// Output: [0,1,9,16,100]

// **Explanation:** After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100]

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "SIZE " << endl;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    for(int i=0;i<n;i++){
        nums[i] = nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
    cout << "ANS : "<<endl;
    for(auto x:nums){
        cout<<x<<" ";
    }
}