#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y;
	cout<<"Enter length x";
	cin>>x;
	cout<<"Enter length y";
	cin>>y;

	for(int i=1;i<x;i++){
		cout<<"*"<<endl;
		if(i==x-1){
			for(int j=1;j<=y;j++){
				cout<<"* ";
			}
		}
	}
}