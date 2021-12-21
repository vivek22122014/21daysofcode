//Find the Number Occurring Odd Number of Times

//Given an array of positive integers. 
//All numbers occur an even number of times except one number which occurs an odd number of times.
#include<iostream>
using namespace std;
int getoddocc(int arr[], int arr_size){
    for(int i=0;i<arr_size;i++){
        int count=0;
        for (int j=0;j<arr_size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
            }
            if (count%2!=0){
                return arr[i];
                break;
        }
        
    }
    return -1;
    }
int main() 
    {
    int arr[]={2,2,3,4,3,4,3,2,2,5,4,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<getoddocc(arr,n);
    return 0;
    }