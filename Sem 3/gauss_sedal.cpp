#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float a[3][3],b[3];
	float x[3]={0};
	float i,j;
	cout<<"Enter Coeffs"<<endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j< 3; ++j)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the constant values"<<endl;
	for (int i = 0; i < 3; ++i)
	{
		cin>>b[i];
	}
	for (int i = 0; i < 10; ++i)
	{
		x[0]=(b[0]-a[0][1]*x[1]-a[0][2]*x[2])/a[0][0];
		x[1]=(b[1]-a[1][0]*x[0]-a[1][2]*x[2])/a[0][0];
		x[2]=(b[2]-a[2][0]*x[0]-a[1][2]*x[1])/a[0][0];
	}
	cout<<"Solution is "<<endl;
	cout<<x[0]<<'\t'<<x[1]<<'\t'<<x[2]<<endl;

	return 0;
}