//Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.


#include<iostream>
using namespace std;
int maxfn(int a,int b,int c);
int minfn(int a,int b,int c);
int main(){
    int a,b,c;
    cout<<"Please enter three numbers : \n";
    cin>>a>>b>>c;
    cout<<endl<<"max "<<maxfn(a,b,c)<<endl;
    cout<<"min "<<minfn(a,b,c);
    return 0;
}
int maxfn(int x,int y,int z){
    int max=x>y&&y>z?x:(y>z?y:z);
    return max;
}
int minfn(int x,int y,int z){
    int min=x<y&&y<z?x:(y<z?y:z);
    return min;
}