//sort array - 2        10-12-21

#include<iostream>
using namespace std;
int main(){
    int n, arr[10],temp;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter numbers in array : \n";
    for (int k = 0; k < n; k++)
    {
        cin>>arr[k];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    cout<<"\n"<<"Sorted array : ";
    for (int i2 = 0; i2 < n; i2++)
    {
       cout<<arr[i2]<<"  ";
    }
    

    return 0;
}