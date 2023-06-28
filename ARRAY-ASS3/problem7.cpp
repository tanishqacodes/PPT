// Question 7
// You are given an inclusive range [lower, upper] and a sorted unique integer array
// nums, where all elements are within the inclusive range.

// A number x is considered missing if x is in the range [lower, upper] and x is not in
// nums.

// Return the shortest sorted list of ranges that exactly covers all the missing
// numbers. That is, no element of nums is included in any of the ranges, and each
// missing number is covered by one of the ranges.

// Example 1:
// Input: nums = [0,1,3,50,75], lower = 0, upper = 99
// Output: [[2,2],[4,49],[51,74],[76,99]]

// Explanation: The ranges are:
// [2,2]
// [4,49]
// [51,74]
// [76,99]
#include<bits/stdc++.h>
using namespace std;
vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges;
        string temp="";
        int n=nums.size();

        for(int i=0;i<nums.size();i++)
        {
            int j=i;

            while(j+1<n && nums[j+1]==nums[j]+1)
            {
                j++;
            }

            if(j>i)
            {
                temp+=to_string(nums[i]);
                temp+="->";
                temp+=to_string(nums[j]);
            }
            else{
                temp+=to_string(nums[i]);
            }

            ranges.push_back(temp);
            temp="";
            i=j;
        }
        return ranges;
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
    int l = 0 , u = n-1;
    cin >> l >> u;
    vector<string> ans =  summaryRanges(v);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout << ans[i][j] <<" ";
        }
        cout<<endl;
    }

}