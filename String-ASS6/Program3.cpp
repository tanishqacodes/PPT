// <aside>
// 💡

// Given an array of integers arr, return *true if and only if it is a valid mountain array*.

// Recall that arr is a mountain array if and only if:

// - arr.length >= 3
// - There exists some i with 0 < i < arr.length - 1 such that:
//     - arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
//     - arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
// </aside>

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    // increasing
    while (i + 1 < n && arr[i] < arr[i + 1])
    {
        i++;
    }
    if (i == 0 || i == n - 1){
        cout << false;
        return 0;
    }
    // dreasing
    while (i + 1 < n && arr[i] > arr[i + 1])
    {
        i++;
    }

    bool ans = i == n-1;
    cout << ans;
}