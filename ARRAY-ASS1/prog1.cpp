#include<bits/stdc++.h>
using namespace std;
// 💡 **Q1.** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// **Example:**
// Input: nums = [2,7,11,15], target = 9
// Output0 [0,1]

// **Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1]
int main(){
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int target;
    cout << "Enter target" << endl;
    cin >> target;
    int i=0 , j=n-1;
    while(i<j){
        if(a[i]+a[j] == target){
            cout << i << " " << j << endl;
            break;
        }
        else if(a[i]+a[j] < target){
            i++;
        }
        else{
            j--;
        }
    }
}
