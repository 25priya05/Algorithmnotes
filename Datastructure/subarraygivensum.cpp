//number of subarrays of size of k  and average greater than or equal to threshold
//Given an array of integers arr and two integers k and threshold, return the number of sub-arrays of size k and average greater than or equal to threshold.
//Input: arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
//Output: 3
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numofsubarrays(vector<int>& arr,int k, int threshold)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    int count = 0;
    int n = arr.size();
    while(j<n)
    {
        sum+=arr[j];
        if(j-i+1 < n && sum/k>=threshold)
        {
            count++;
        }
        j++;
        while(j-i+1 > k)
        {
            sum  = sum - arr[i];
            i++;
        }

    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
   int res =  numofsubarrays( arr, 3, 4);
   cout<<res<<" ";
    return 0;
}

