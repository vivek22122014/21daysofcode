/*
Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point). Go to the editor
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000 
*/

#include<iostream>
using namespace std;
float avgfuel(int a,float b);
int main(){
    cout<<"Input total distance in km: ";
    int km;
    float ltr;
    cin>>km;
    cout<<"Input total fuel spent in liters: ";
    cin>>ltr;
    cout<<"Average consumption (km/lt): "<<avgfuel(km,ltr);
    return 0;
}
float avgfuel(int a,float b){
    float value = (int)((a/b)* 100 + .5);
    return (float)value / 100;
}