// You are given an m x n integer matrix matrix with the following two properties:

// - Each row is sorted in non-decreasing order.
// - The first integer of each row is greater than the last integer of the previous row.

// Given an integer target, return true *if* target *is in* matrix *or* false *otherwise*.

// You must write a solution in O(log(m * n)) time complexity.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
     int rows = matrix.size();
    int row = 0, col = matrix[0].size() - 1;
    int target = 10;
    while (row < rows && col > -1)
    {
        int cur = matrix[row][col];
        if (cur == target){
            cout << true;
            break;
        }
        if (target > cur)
            row++;
        else
            col--;
    }
    if(row == rows || col == -1)
        cout << false;
}