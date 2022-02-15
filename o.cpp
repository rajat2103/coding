#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cout<<"Enter length x"<<endl;
	cin>>x;

	for(int i=1;i<=x;i++)
		cout<<"*";
	cout<<endl;
	for(int j=1;j<=x-2;j++){
		cout<<"*";
		for(int k=1;k<=x-2;k++)
			cout<<" ";
		cout<<"*";
		cout<<endl;
	}
	for(int m=1;m<=x;m++){
		cout<<"*";
	}
}