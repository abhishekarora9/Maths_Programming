#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

double function1(double x){

	return x*tan(x)+1;
}
int main ()
{
	int k;
	double mid;
	double a,b;
	double f1,f2,fmid;
	K:
	cout<< "enter your guess"<<endl;
	cin>>a>>b;
	f1=function1(a);
	f2=function1(b);
	if((f1*f2)>0)
		goto K;
	while(function1(a)*function1(b)<0){
		mid=(a+b)/2;
		fmid= function1(mid);
		if(function1(a)*fmid<0)
			b=mid;
		if(function1(b)*fmid<0)
			a=mid;

		if(fmid>(-0.001)&&(fmid<0.001))
			break;

	}
	cout<< mid<<endl;




	return 0;
}