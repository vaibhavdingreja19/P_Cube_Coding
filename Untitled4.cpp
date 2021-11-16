#include <iostream>
#include <conio.h>
#define max 10
int v,b[max+1][max+1];
using namespace std;
void floyds(int b[max+1][max+1])
{
	
    int i, j, k;
    for (k = 0; k < v; k++)
    {
        for (i = 0; i < v; i++)
        {
            for (j = 0; j < v; j++)
            {
                if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }
    for (i = 0; i < v; i++)
    {
        cout<<"\nMinimum Cost With Respect to Node:"<<i<<endl;
        for (j = 0; j < v; j++)
        {
            cout<<b[i][j]<<"\t";
        }
 
    }
}
int main()
{
	cin>>v;
    int b[max+1][max+1];
    cout<<"ENTER VALUES OF ADJACENCY MATRIX\n\n";
     for(int i=1;i<=v;i++)
	{
        for(int j=1;j<=v;j++)
		{
            cin >> b[i][j];
        }
}
    floyds(b);
    getch();
}
