#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int x;
	cout<<"Enter x"<<endl;
	cin>>x;
	int y=x-2; 
	for(int i=1;i<=x;i++)
		cout<<"*";
	cout<<endl;
	while(y!=0)
	{
		for(int j=1;j<=y;j++)
		cout<<" ";
	cout<<"*"<<endl;
	y--;
	}
	for(int k=1;k<=x;k++)
		cout<<"*";
}