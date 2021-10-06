#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	string name,lname;
	float a,b,c,d;
	cout<<"nam v name khanevadegi ra vared jonid:\n";
	cout<<"name:";
	cin>>name;
	cout<<"name khanevadegi:";
	cin>>lname;
	cout<<"nomre 3 darse mored nazr ra vared konid:\n";
	cout<<"darse 1:";
	cin>>a;
	cout<<"darse 2:";
	cin>>b;
	cout<<"darse 3:";
	cin>>c;
	
	d=a+b+c;
	d/=3;
	if(d>=17)
		cout<<"Great.\n";
	else if(d<17 && d>=12)
		cout<<"Normal.\n";
	else if(d<12)
		cout<<"Fail.\n";
	
}
