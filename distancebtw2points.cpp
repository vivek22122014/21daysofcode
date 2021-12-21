/*
15. Write a C program to calculate the distance between the two points. 
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803 
*/

#include<iostream>
#include<math.h>
using namespace std;
float dist(int a,int b,int c,int d);
int main(){
    int x1,x2,y1,y2;
    cout<<"Input points \n ";
    cout<<"Input x1 : ";
    cin>>x1;
    cout<<"Input y1 : ";
    cin>>y1;
    cout<<"Input x2 : ";
    cin>>x2;
    cout<<"Input y2 : ";
    cin>>y2;
    cout<<"\nDistance between the said points: "<<dist(x1,x2,y1,y2);
    return 0;
}
float dist(int x1,int x2,int y1,int y2){

    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

}