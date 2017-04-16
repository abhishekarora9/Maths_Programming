#include <iostream>
//#include <conio.h>
using namespace std;


float f(float x, float y)
{	
	return x*x+y;
}
int main ()
{
	//clrscr();
	float x0,y0,x1,y1,h;
	cout<<"Enter the value of x and y "<<endl;
	cin>>x0>>y0;
	cout<<"Enter the value of x1"<<endl;
	cin>>x1;
	cout<<"Enter the value of h"<<endl;
	cin>>h;
	while(x0<x1){
		y1=y0+h*f(x0,y0);
		//x1=x0+h;
		y1=y0+(h/2)*f((x0+x1)/2,(y0+y1)/2);
		x0=x0+h;
		y0=y1;
	}
	cout<<"Value of y1 is "<<y1<<endl;
	//getch();
	return 0;
}