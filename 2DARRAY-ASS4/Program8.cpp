// Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

// *Return the array in the form* [x1,y1,x2,y2,...,xn,yn].

// **Example 1:**

// **Input:** nums = [2,5,1,3,4,7], n = 3

// **Output:** [2,3,5,4,1,7]

// **Explanation:** Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> nums(2*n);
    for (int i = 0; i < 2*n; i++)
        cin >> nums[i];
    vector<int> ans;
    int i=0,j=n;
    while(i<n && j<2*n){
        ans.push_back(nums[i++]);
        ans.push_back(nums[j++]);
    }
    cout<<"Shuffe array"<<endl;
    for(auto x:ans){
        cout << x <<" ";
    }
}