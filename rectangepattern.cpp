//Print a solid rectangle

#include<iostream>
using namespace std;
int main(){
int row,column;
cout<<"enter number of rows\n";
cin>>row;
cout<<"enter number of columns\n";
cin>>column;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            cout<<"* ";
        }
    cout<<endl;
    }
    return 0;
}