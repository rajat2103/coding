#include<bits/stdc++.h>
using namespace std;

int main()
{
	int dig,b,num=0,rem,p=1;
	cout<<"Enter digit in decimal"<<endl;
	cin>>dig;
	cout<<"Enter the base"<<endl;
	cin>>b;

	while(dig>0)
	{
		rem = dig%b;
		dig = dig/b;

		num += rem * p;
		p = p*10;
	}
	cout<<num;
}