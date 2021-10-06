#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a,b,result=0;
	string op;
	
	cout<<"enter a: ";
	cin>>a;
	
	cout<<"enter b: ";
	cin>>b;
	
	cout<<"enter the oparator: ";
	cin>>op;
	
	if(op=="+")
	{
		result=a+b;
	}
	else if(op=="-")
	{
		result=a-b;		
	}
	else if(op=="/")
	{
		if(b!=0)
		{
			result=a/b;
		}
		else
		cout<<" eror";
	}
	else if(op=="sin")
	{
		a=a*M_PI/180;
		result=sin(a);
	}
	else if(op=="cos")
	{
		a=a*M_PI/180;
		result=cos(a);
	}
	else if(op=="tan")
	{
		a=a*M_PI/180;
		result=tan(a);
	}
	else if(op=="cot")
	{
		a=a*M_PI/180;
		a=tan(a);
		result=1/a;
	}
	else if(op=="radical")
	{
		result=sqrt(a);
	}
	else if(op=="factorial")
	{
		int fact=1;
		for(int i=a;i>0;i--)
		{
			fact*=i;
		}
		result=fact;
	}
		
	cout<<result;
	
	return 0;
}
