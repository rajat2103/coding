#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,fact=1;
	cout<<"Enter value x"<<endl;
	cin>>x;
	if(x==0)
		fact=0;
	for(int i=1;i<=x;i++)
		fact = fact*i;
	cout<<fact;
	
}