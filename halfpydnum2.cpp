// Print Half Pyramid using numbers -2 7-12-21

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number : ";
    cin>>n;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    











    return 0;
}