//equilibrium point 
//sum of left of the element  is equal to the right sum of the element 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int equilibriumpoint(int arr[],int n)
{
//     for(int i = 0;i<n;i++)
//    { int leftsum ;
//     for(int  j = 0;j<i;j++)
//     {
//         leftsum+=arr[j];
//     }
//     int rightsum ;
//     for(int j = i+1;j<n;j++)
//     {
//         rightsum += arr[j];
//     }
//     if(rightsum==leftsum)
//     {
//         return i;
//     }
//    }
//    return -1;
if(n==1)
{
    return (1);
}  
int leftarr[n] = {0};
int rightarr[n] = {0};
 leftarr[0] = arr[0];
for(int i = 1;i<n;i++)
{
    leftarr[i] = leftarr[i-1]+arr[i];
}
 rightarr[0] = arr[n-1];
for(int i = n-2;i>=0;i--)
{
    rightarr[i] = rightarr[i+1]+arr[i];
}
for(int  i = 0;i<n;i++)
{
    if(leftarr[i] = rightarr[i])
    {
        return i+1;
    }
}
return -1;


}
int main()
{
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	cout << "First Point of equilibrium is at index "
		<<equilibriumpoint(arr, n)<<" ";
    return 0;
}