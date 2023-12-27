//  sorting 0, 1,2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class solution
{ public:
void sort012(int arr[],int n)

{
    int mid = 0;
    int low = 0;
    int high = n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low++],arr[mid++]);
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid++],arr[high--]);
        }
    }

}
};
int main(int argc, char const *argv[])
{  int t; 
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];

    }
      solution ob;
      ob.sort012(arr,n);
      for(int i = 0;i<n;i++)
      {
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    return 0;
}
