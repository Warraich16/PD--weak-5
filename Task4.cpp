#include <iostream>
using namespace std;
int firm(int no_of_hours,int no_of_days,int no_of_workers);
int main()
{
	int no_of_hours,no_of_days,no_of_workers,hours,a,b,total_hours,c,result;
	cout <<"Enter number of hours needed to complete the work: ";
	cin >>no_of_hours;
	cout <<"Enter number of days needed to complete the work: ";
	cin >>no_of_days;
	cout <<"Enter number of workers needed to complete the work: ";
	cin >>no_of_workers;
	
    result = firm(no_of_hours,no_of_days,no_of_workers);
    
	
}
int firm(int no_of_hours,int no_of_days,int no_of_workers)
{
	int hours,a,b,total_hours,c;
		if (no_of_hours <= 200000)
	
	{
	   if (no_of_days  < 20000)
	   {
	   
		hours = no_of_days*10;
		total_hours = hours*0.1;
		c = hours - total_hours;
		if (no_of_workers <= 200)
		{
		
		a = c * no_of_workers;
		b = a - no_of_hours;
		if (no_of_hours > a)
		{
		
		cout <<"NOt enough time " <<-b << "hours needed.";
	}
	     if (no_of_hours < a)
	     {
	     	cout <<"You have enough time "<<b <<"hours left.";
		 }
		}
	}
    }
    return b;
}

