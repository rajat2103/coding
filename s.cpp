#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int x; 
	cout<<"Enter x"<<endl;
	cin>>x;

	for(int i=1;i<=x;i++)
		cout<<"*";
	cout<<endl;
	for(int j=1;j<=x-2;j++)
		cout<<"*"<<endl;
	for(int k=1;k<=x;k++)
		cout<<"*";
	cout<<endl;
	for(int l=1;l<=x-2;l++){
		for(int m=1;m<=x-1;m++)
		cout<<" ";
		cout<<"*"<<endl;
	}
	for(int n=1;n<=x;n++)
		cout<<"*";
}