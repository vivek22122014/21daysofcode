/*
5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches. 
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
*/

#include<iostream>
using namespace std;
int areafn(int a,int b);
int perimeterfn(int a,int b);
int main(){
    int l;
    int w;
    cout<<"\nPlease enter length : ";
    cin>>l;
    cout<<"Please enter width : ";
    cin>>w;
    cout<<"\nArea of rectangle = "<<areafn(l,w)<<"\n";
    cout<<"Perimeter of rectangle = "<<perimeterfn(l,w);

    return 0;
}
int areafn(int a,int b){
    return a*b;
}
int perimeterfn(int a,int b){
    return 2*(a+b);
}