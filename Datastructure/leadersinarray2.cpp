//here we are using the optimal method
//to find the leaders in array
#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> leadersinarray(vector<int>&arr,int n)
{   
    vector<int>res;
    int maxi = INT32_MIN;

    for(int i = n-1;i>=0;i--)
    {
        if(arr[i]>maxi)
        {
            //maxi = arr[i];
            res.push_back(arr[i]);
        }
        maxi = max(maxi,arr[i]);
    }
    sort(res.begin(),res.end());
    return res;
}
int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ans = leadersinarray(arr,n);
    for(int i = 0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
