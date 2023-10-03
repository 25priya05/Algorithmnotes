#include <iostream>
#include <vector>
using namespace std;

vector<int> leaderinarray(vector<int>&arr,int n)
{
    vector<int> ans;
    bool leader;
    for(int i = 0;i<n;i++)
    {
        leader = true;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                leader = false;
                break;
            }
        }
        if(leader == true)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{   
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<arr.size();i++)
    {
       cin>>arr[i];

    }

vector<int> leaders = leaderinarray(arr, n);
for(int i = 0;i<leaders.size();i++)
{
    cout<<leaders[i]<<" ";
}

    
    return 0;
}

