// 💡 **Question 1**
// Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

// **Example 1:**

// Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

// Output: [1,5]

// **Explanation:** Only 1 and 5 appeared in the three arrays.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "SIZE : "<<endl;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    vector<int> v3(n);
    cout << "INPUT "<<endl;
    for(int i=0;i<n;i++){
        cin >> v1[i];
    }
    for(int i=0;i<n;i++){
        cin >> v2[i];
    }
    for(int i=0;i<n;i++){
        cin >> v3[i];
    }
    int i=0,j=0,k=0;
    while(i<n && j<n && k<n){
        if(v1[i]==v2[j] && v1[i]==v3[k] && v2[j]==v3[k]){
            cout<<v1[i]<<" ";
            i++;j++;k++;
        }
        if(v1[i]<v2[j])i++;
        else if(v2[j]<v3[k]) j++;
        else k++;
    }
}

