#include <iostream>
#include <math.h>
using namespace std;
double func(double x){
	double t;
	t=pow(2.718,-(pow(x,2)));
	return t;
}

int main (){

	double a,b,h,y[50];
	double i;
	int n;
	cout<<"Enter the limit a,b(a<b)"<<endl;
	cin>>a>>b;
	cout<<"Enter no. of divisions"<<endl;
	cin>>n;
	h=(b-a)/n;
	for (int i = 0; i <=n; ++i)
	{
		y[i]=func(a+(i*h));
	}
	double s=y[0]+y[n];
	double e= 0;
	double add=0;
	for (int i = 1; i < n; ++i)
	{
		if(i%2==0)
			e+=y[i];
		else
			add+=y[i];
	}
	double integ=(h*(s+(2*e)+(4*add))/3);
	cout<<"Integration is "<<integ<<endl;
}