//here we had used the brute force approach in which time complexity is 0(n*n) and space complexity is same 

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> rotated(n, vector<int>(n,0));
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            rotated[j][n-i-1] = matrix[i][j];
        }
    }
    return rotated;
}
int main(int argc, char const *argv[])
{
    vector<vector<int>> arr;
     arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
     vector < vector<int>>rotated = rotate(arr);
     cout<< "rotated img"<<endl;
     for(int i = 0;i<rotated.size();i++)
     {
        for(int j = 0;j<rotated[0].size();j++)
        {
            cout<<rotated[i][j]<<" ";
        }
        cout<<endl;
     }

    return 0;
}


