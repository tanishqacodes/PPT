// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans(n, vector<int>(n));
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int x = 1;
    while (left <= right && top <= bottom)
    {
        // top -> left to right
        for (int i = left; i <= right; i++)
        {
            ans[top][i] = x;
            x++;
        }
        top++;
        // right -> top to bottom
        for (int i = top; i <= bottom; i++)
        {
            ans[i][right] = x;
            x++;
        }
        right--;
        // bottom -> right to left (reverse)
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans[bottom][i] = x;
                x++;
            }
        }
        bottom--;
        // left -> bottom to top(reverse)
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans[i][left] = x;
                x++;
            }
        }
        left++;
    }
    cout << "OUTPUT : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}