#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numSubarraysWithSum(vector<int> &nums, int goal)
{
    unordered_map<int, int> prefixSum;
    prefixSum[0] = 1; // Initialize hashmap with 0 sum occurrence as 1
    int count = 0;
    int currentSum = 0;

    for (int num : nums)
    {
        currentSum += num;
        if (prefixSum.find(currentSum - goal) != prefixSum.end())
        {
            count += prefixSum[currentSum - goal];
        }
        prefixSum[currentSum]++;
    }

    return count;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
   int res =  numSubarraysWithSum(nums,1);
   cout<<res<<" ";

    return 0;
}
