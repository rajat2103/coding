#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x=1;
	cout<<"Enter no of rows:"<<endl;
	cin>>n;
	int k=n-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
			cout<<" ";
		k--;
		for(int l=1;l<=i;l++)
			{cout<<x<<" ";
			 x++;
			}
		cout<<endl;
	}
}