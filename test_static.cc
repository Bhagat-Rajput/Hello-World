#include<iostream>
#include "asmd.h"
using namespace std;
int main()
{
	int res,a,b;
	cout<<"Enter First Number";
	cin>>a;
	cout<<"Enter second Number";
	cin>>b;


	res=add(a,b);
	cout<<"Result="<<res;
	res=sub(a,b);
	cout<<"\n Result="<<res;
	res=mul(a,b);
	cout<<"\n Result="<<res;

	
return 0;
}
