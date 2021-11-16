#include <iostream>
using namespace std;

int main() {
    int i,j,temp=-1,temp2=0,n;
    cin>>n;
    cout<<"1"<<endl;
    for(i=2;i<=n;i++)
  {
  	if(i%2!=0)
  	{
  		temp=i;
  		for(j=1;j<=i;j++)
  		{
  			temp=temp+1;
  			cout << temp<<" ";
		}
	}
	if(i%2==0)
	{
		temp2=i;
		temp2=(i*(i+1))/2;
		for(j=1;j<=i;j++)
		{
			cout<<temp2<<" ";
			temp2--;
		}
	}
	cout<<endl;
}
  }
    
