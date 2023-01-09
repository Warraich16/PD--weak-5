#include <iostream>
using namespace std;
int Vpyramid(int length,int height,int width, string unit);
int main()
{
	int length,height,width;
	float final;
	string unit,cenitmeters;
	cout <<"ENter length in meters: ";
	cin >>length;
	cout <<"Enter width in meters: ";
	cin >>width;
	cout <<"Enter height in meters : ";
	cin >>height;
	cout <<"Enter unit in which you want to calculate the volume of pyramid: ";
	cin >>unit;
	final = Vpyramid(length,height,width, unit);
		if (unit =="centimeters")
	{
	  final = final*100;
	
	 cout <<"The volume of pyramid is : "<<final<<" cubicmeters"; 
    }
       if (unit =="milimeters")
       {
       	 final = final*1000;
	
	     cout <<"The volume of pyramid is : "<<final<<" cubicmeters";
	   }
	    if (unit =="kilometers")
       {
       	 final = final/1000;
	
	     cout <<"The volume of pyramid is : "<<final<<" cubicmeters";
	   }
}
int Vpyramid(int length,int height,int width, string unit)
{
	
	float finalresult;

	finalresult = (length*width*height)/3;
	return finalresult;
	
}
