//sorting array 10-12-21

//#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, arr[10];
    cout<<"Enter number of elements to input : ";
    cin>>n;
    cout<<"Enter array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
cout<<endl;
cout<<"Sorted array : ";
for(int i2=0;i2<n;i2++){
        cout<<arr[i2]<<" ";
    }




return 0;

}
