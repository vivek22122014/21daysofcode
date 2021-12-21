/*
Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3 
*/
#include<iostream>
using namespace std;
void daystoyear(int days);
int main(){
    int days;
    cout<<"Please enter number of days : ";
    cin>>days;
    daystoyear(days);
    return 0;
}

void daystoyear(int days){
   int year=days/356;
   int week=(days%365)/7;
   int day= (days%365)%7;
   cout<<"Years : "<<year<<"\n";
   cout<<"Weeks : "<<week<<"\n";
   cout<<"Days : "<<day;

}


/*
#include <stdio.h> 
int main()
{
    int days, years, weeks;

    days = 1329; 

    // Converts days to years, weeks and days
    years = days/365; 
    weeks = (days % 365)/7;
    days = days- ((years*365) + (weeks*7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);

    return 0;
}
*/