#include <iostream>
#include <cmath>
using namespace std;
float tax_collector(float price_of_vehicle, float type_of_vehical);
main()
{
   char type;
    float  price;
    float  totalprice;
    float taxcollector;
    float result;
    result=tax_collector(price,type);

}
  float tax_collector(float price_of_vehicle, float type_of_vehical)
  {
  float tax;
  float totalprice;
  float price;
  float result;
 char type;
  cout<<"enter vehicle type";
  cin>>type;
  cout<<"enter vehicle price ";
  cin>>price;
   if(type=='m')
   {
     tax=price*(6/100);
     cout<<"tax price is:"<<tax;
     totalprice=price+tax;
     cout<<"total price is:"<<totalprice;
    }
    if(type=='e')
    {
    tax=price*(8/100);
    cout<<"tax price is:"<<tax;
    totalprice=price+tax;
    cout<<"total price is:"<<totalprice;
    }
    if(type=='s')
    {
    tax=price*(10/100);
    cout<<"tax price is:"<<tax;
    totalprice=price+tax;
    cout<<"total price is:"<<totalprice;
    }
    if(type=='v')
    {
    tax=price*(12/100);
    cout<<"tax price is:"<<tax;
    totalprice=price+tax;
    cout<<"total price is:"<<totalprice;
    }
    if(type=='t')
    {
    tax=price*(15/100);
    cout<<"tax price is:"<<tax;
    totalprice=price+tax;
    cout<<"total price is:"<<totalprice;
    }
    return totalprice;
  }




   
   
