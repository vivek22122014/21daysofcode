//Print a hollow rectangle

#include<iostream>
using namespace std;
int main(){

    int row,column;
    cout<<"enter row\n";
    cin>>row;
    cout<<"enter column\n";
    cin>>column;
    int i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            if((i==1)||(i==row) || (j==1)||(j==column)){
                cout<<"* ";
            }
        
            else {
                cout<<"  ";
            }}
        
        cout<<endl;
    }

    return 0;
}