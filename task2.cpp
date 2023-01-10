#include <iostream>
#include <cmath>
using namespace std;
main()
{
 int lenght;
 int width;
 int height;
 int inmeters;
 int answer;
 int result; 
 int cubiccm;
 int cubickm;
 int cubicmm;
 int volume;
 cout<<"enter lenght in meters";
 cin>>lenght;
 cout<<"enter the width in meters";
 cin>>width;
 cout<<"enter height in meters";
 cin>>height;
 if(answer==cubiccm)
 {
 volume=lenght*height*width*1000000000;
 cout<<"result in cubiccm is:"<<result;
 }
  if(answer==cubickm)
 {
   volume=(lenght*width*height)/1000000;
   cout<<"result in cubickm:"<<result;
 }
  if(answer==cubicmm)
 {
    volume=(lenght*width*height)/1000000000;
    cout<<"result in cubicmm:"<<result;
 }
   return result;
}
 