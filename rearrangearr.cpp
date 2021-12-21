//Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i

//Given an array of n elements. Our task is to write a program to rearrange the array such that 
//elements at even positions are greater than all elements before it and elements at odd positions are less than all elements before it.


#include<iostream>
using namespace std;

int main(){

int arr[]={1,2,3,4,5,6,7,8};

for(int m=0;m<8;m++){
    cout<<arr[m]<<endl;
}

for(int i=0;i<8;i++){
    int count=0;
for(int j=1;j<8;j++){

    if ((count==0) || (count%2==0)){
        if(arr[i]<arr[j]){
            int temparr=arr[i];
            arr[i]=arr[j];
            arr[j]=temparr;
            
        }
    count++;
    }
    else {
        if (count%2!=0){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            
        }
        }
        count++;
        }
}
cout<<"AFTER"<<endl;
for(int p=0;p<8;p++){
    cout<<arr[p]<<endl;
}
return 0;
}}