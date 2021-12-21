//print inverted half pyramid 6-12-21

#include<iostream>
using namespace std;
int main(){
        int n;
        cout<<"Enter number : ";
        cin>>n;
        for(int i=1;i<n+1;i++){   //(int i=n;i>=1;i--)
            for(int j=i;j<=n;j++)  //(int j=1;j<=i;j++)
            cout<<"* ";

        cout<<endl;


        }


return 0;
}