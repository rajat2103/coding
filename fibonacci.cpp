#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,i=0,j=1,k;
	cout<<"Enter value x"<<endl;
	cin>>x;

	if(x==0)
		cout<<i;
	if(x==1)
		cout<<j;
	for(int m=1;m<=x;m++)
	{
	k = i+j;
	i=j;
	j=k;
	cout<<k<<", ";
	}
}