#include <iostream>
#include <cmath>
using namespace std;
float input(float hours,float days, float workers);
main()
{
 float inputhours;
 float days;
 float workers;
 float result;
 float remaininghours;
 float hours;
 remaininghours= input(hours,days,workers);
}
float input(float hours,float days, float workers)
{
 float workinghours;
 float remaininghours;
 float result;
 float per10;
 cout<<"enter no. of hours:";
 cin>> hours;
 cout<<"enter input days:";
 cin>> days;
 cout<<"enter no. of workers";
 cin>> workers;
 per10=0.1*days;
 days=days-per10;
 workinghours=days*10*workers;
 if(workinghours>hours)
 {
    remaininghours=workinghours-hours;
    cout<<"yes";
 }
 if(workinghours<hours);
 {
 cout<<"not enough time";
 }
 return result;
}





