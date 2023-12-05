#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int  tappingrainwater(vector<int> &arr,int n)
{
    int leftarr[n] = {0};
    int rightarr[n] = {0};
    leftarr[0] = arr[0];
    rightarr[n-1] = arr[n-1];
    int ans = 0;
    for(int i = 1;i<n;i++)
    {
        leftarr[i] = max(leftarr[i-1],arr[i]);

    }
    for(int i = n-2;i>=0;i--)
    {
        rightarr[i] = max(rightarr[i+1],arr[i]);
    }
    for(int i = 0;i<n;i++)
    {
        ans += min(leftarr[i],rightarr[i]) - arr[i];
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res = tappingrainwater(arr,n);
    cout<<res<<" ";
    return 0;
}
