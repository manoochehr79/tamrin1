#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a,b,c;
	cout<<"andaze zel ha ra vared konid : \n";
	cin>>a>>b>>c;
	
	if(a<b+c&&b<a+c&&c<a+b)
	{
		cout<<"bale emkan pazir ast.\n";
	}
	else
	{
		cout<<"khair emkan pazir nist.\n";
	}
}
