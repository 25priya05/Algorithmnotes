// here we will learn about the sliding window
// we will use here for loop
// sliding window with fixed  window length
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int maxmsubarray(vector<int>& arr, int v)
{
    int currsum = 0;
    int n = arr.size();

    for (int i = 0; i < v; i++)

        currsum += arr[i];

    int res = currsum;
    for (int i = v; i < n; i++)
    {
        currsum = arr[i] -  arr[i - v] + currsum;
        res = max(res,currsum);
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = maxmsubarray(arr,3);
    cout<<ans<<" ";    

        return 0;
}
