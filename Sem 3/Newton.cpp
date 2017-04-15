#include <iostream>
using namespace std;
float function1(float a, float b, float c, float x)
{
	return (a*x*x+b*x+c);
}

float derivative(float a , float b, float x){
	return (2*a*x+b);
}

int main ()
{
	float a ,b ,c;
	int n=0;
	float xn,x;
	cout<<"Enter coeffs"<<endl;
	cin>>a>>b>>c;
	cout<<"Enter your guess"<<endl;
	cin>>x;
	for (int i = 0; i < 100; ++i)
	{
		xn=x-(function1(a,b,c,x))/derivative(a,b,x);
		x=xn;
	}
	cout<<xn<<endl;

	return 0;
}