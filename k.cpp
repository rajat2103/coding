#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int x;
	cout<<"Enter x"<<endl;
	cin>>x;

	int y=x-1;
		//for(int i=1;i<=x;i++){
			
			while(y!=0){
				cout<<"*";
			for(int j=1;j<=y;j++)
				cout<<" ";
			cout<<"*";
			cout<<endl;
			y--;
		}
		
	}
