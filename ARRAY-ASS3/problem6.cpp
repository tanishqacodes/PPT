// Given a non-empty array of integers nums, every element appears twice except
// for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only
// constant extra space.

// Example 1:
// Input: nums = [2,2,1]
// Output: 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Size : "<<endl;
    cin >> n;
    vector<int> v(n);
    cout << "Input : "<<endl;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^v[i];
    }
    cout<<ans<<endl;
}