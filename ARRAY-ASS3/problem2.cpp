// Given an array nums of n integers, return an array of all the unique quadruplets
// [nums[a], nums[b], nums[c], nums[d]] such that:
//            ● 0 <= a, b, c, d < n
//            ● a, b, c, and d are distinct.
//            ● nums[a] + nums[b] + nums[c] + nums[d] == target

// You may return the answer in any order.

// Example 1:
// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> Sum(vector<int> nums,int target){
    int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++) {
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1;j<n;j++) {
                if(j != (i+1) && nums[j] == nums[j-1]) continue;

                int k = j+1;
                int l = n-1;
                while(k<l) {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];

                    if(sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k] == nums[k-1]) k++;
                        while(k<l && nums[l] == nums[l+1]) l--;
                    }
                    else if(sum > target) l--;
                    else k++;
                }
            }
        }
        return ans;
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
    int target;
    cout << "Target" << endl;
    cin >> target;
    vector<vector<int>> ans =  Sum(v,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout << ans[i][j] <<" ";
        }
        cout<<endl;
    }
}