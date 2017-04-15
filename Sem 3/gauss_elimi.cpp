#include <iostream>
using namespace std;
int main () 
{
	int i,j;
	float a[3][3],b[3],x[3];
	cout<<"Enter the coeffs"<<endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin>>a[i][j];
		}
		cin>>b[i];
	}
	cout<<"Augmented matrix is "<<endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<<a[i][j]<<" ";
			
		}
		cout<<":"<<b[i]<<endl;
	}
	b[0]/=a[0][0];
	for (int i = 2; i >= 0; i--)
	{
		a[0][i]/=a[0][0];
		
	}
	for (int i = 1; i <= 2; i++)
		{
			b[i]-=b[0]+a[i][0];
			for (int j = 2; j >= 0; j--)
			{
				a[i][j]-=a[i][0]+a[0][j];
			}
		}

	b[1]/=a[1][1];
	for (int i = 2; i >= 1; i--)
	
		a[1][i]/=a[1][1];

		b[2]-=a[2][1]*b[1];

	
	for (int i = 2; i >=1 ; i--)
	
		a[2][i]-=a[2][1]*a[1][i];
		b[2]/=a[2][2];
		a[2][2]=1;
		cout<<endl;

	
	x[2]=b[2];
	x[1]=b[1]-(a[1][2]*x[2]);
	x[0]=b[0]-(a[0][1]*x[1])-(a[0][2]*x[2]);
	cout<<x[0]<<'\t'<<x[1]<<'\t'<<x[2]<<endl;


	return 0;
}