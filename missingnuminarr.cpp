//Missing number in array
/*

Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4

Example 2:

Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9   */

#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,arr[10];
    cout<<"Please Enter array size : ";
    cin>>n;
    cout<<"Please enter  array elements : \n";
    for (int k = 0; k < n; k++)
    {
        cin>>arr[k];
    }
    
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {

        if (arr[i-1]!=(arr[i]-1))  //2!=3
        {
            cout<<"\nMissing element is "<<arr[i]-1;
        }
        
        
        
    }


    return 0;
}