// Given a sorted array of distinct integers and a target value, return the index if the
// target is found. If not, return the index where it would be if it were inserted in
// order.

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2
#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
      return lower_bound(nums.begin(), nums.end(), target) - nums.begin();  
    }
int main(){
    int n;
    cout<<"Size : "<<endl;
    cin >> n;
    vector<int> v(n);
    cout << "Input : "<<endl;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
}