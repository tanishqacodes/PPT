// Given an array of meeting time intervals where intervals[i] = [starti, endi],
// determine if a person could attend all meetings.

// Example 1:
// Input: intervals = [[0,30],[5,10],[15,20]]
// Output: false
#include <bits/stdc++.h>
using namespace std;
 bool compareSecondElement(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }

int erase(vector<int> v)
{
    int ans = -1;
    if (v.size() == 0)
        return 0;
    sort(v.begin(), v.end(), comp); // custom comperator is used.
    vector<int> prev = v[0];

    for (vector<int> i :v)
    {
        if (prev[1] > i[0])
        {
            ans++; // we dont update previous, because i[1] will be grater then prev[1]
        }
        else
            prev = i; // we want the end point to be minimum
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Size : "<<endl;
    cin >> n;
    vector<int> v(n);
    cout << "Input : "<<endl;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cout << "ANs: "<<erase(v)<<endl;
    
}