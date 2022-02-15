#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b)
{
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a==b)
		return a;
	if(a>b)
		return hcf(a-b, b);
	return hcf(a, b-a);
}

int main()
{
	int a,b;
	cout<<"Enter any two numbers:"<<endl;
	cin>>a;
	cin>>b;
	cout<<"HCF is: "<<hcf(a,b);
}