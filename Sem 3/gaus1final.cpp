#include <iostream>
using namespace std;

void solution( int a[][20], int var );
int main()
{

    int a[ 20 ][ 20 ], var, i, j, k, l, n;
    printf( "\nEnter the number of variables:\n" );
    cin>>var;

    for ( i = 0;i < var;i++ )
    {
        cout<<"Enter eq"<<endl;

        for ( j = 0;j < var;j++ )
        {
            cout<<"enter coeff"<<endl;
            cin>>a[i][j];
        }

        cout<<"enter constants"<<endl;
        cin>>a[i][var];
    }

    solution( a, var );
    return 0;
}
void solution( int a[ 20 ][ 20 ], int var )
{
    int k, i, l, j;

    for ( k = 0;k < var;k++ )
    {
        for ( i = 0;i <= var;i++ )
        {
            l = a[ i ][ k ];

            for ( j = 0;j <= var;j++ )
            {
                if ( i != k )
                a[i][j] = (a[k][k]*a[i][j])-(l*a[k][j]);
            }
        }
    }
    cout<<"solutions"<<endl;

    for ( i = 0;i < var;i++ )
    {
        cout<<( float ) a[ i ][ var ] / ( float ) a[ i ][ i ] <<endl;
    }

}
