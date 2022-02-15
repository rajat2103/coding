#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int x; 
	cout<<"Enter x"<<endl;
	cin>>x;

	for(int i=1;i<=x;i++){
		cout<<"*";
		for(int j=1;j<=x-2;j++)
			cout<<" ";
		cout<<"*";
		cout<<endl;
	}
	for(int k=1;k<=x;k++)
		cout<<"*";
	cout<<endl;
	for(int l=1;l<=x;l++){
		cout<<"*";
		for(int m=1;m<=x-2;m++)
			cout<<" ";
		cout<<"*";
		cout<<endl;
	}
}