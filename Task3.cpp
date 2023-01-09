#include <iostream>
using namespace std;
float taxcalculator(char type,float price);
int main()
{
	char type;
	float price,final_result;
	// Following are the available cars:
	cout <<"Following are the available cars: "<<endl <<endl;
	cout <<"IF you want to buy Motorcyle then enters M "<<endl <<endl;
	cout <<"IF you want to buy electric then enters E "<<endl<<endl;
	cout <<"IF you want to buy sedan then enters S "<<endl<<endl;
	cout <<"IF you want to buy Van then enters V "<<endl<<endl;
	cout <<"IF you want to buy truck then enters T "<<endl<<endl;
	
	cout <<"Enter the price of vehicle: ";
	cin >>price;
	cout <<"Enter the code of vehicle: ";
	cin >>type;
    final_result = taxcalculator(type,price);
   
     cout <<final_result;
	 
}
float taxcalculator(char type,float price)
{
	float taxamount,finalamount;
	float a;
	if (type == 'M')
	{
	
		a = price*0.06;
		finalamount = a+price;
		return finalamount;
		
	}
	
	
	if (type == 'E')
	{
		taxamount = price*0.08;
		finalamount = price+taxamount;
	    return finalamount;
	}
	
	
	if (type == 'S')
	{
		taxamount = price*0.1;
		
		finalamount = price + taxamount;
		return finalamount;
	}
	
	
	if (type == 'V')
	{
		taxamount = price*0.12;
		finalamount = price+taxamount;
	    return finalamount;
	}
	
	
	if (type == 'T')
	{
		taxamount = price*0.15;
		finalamount = price+taxamount;
		return finalamount;
	}
	
}
