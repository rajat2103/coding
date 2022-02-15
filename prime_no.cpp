#include<bits/stdc++.h>
using namespace std;

int prime(int x)
{
    for(int i=2;i<x;i++)
        if(x%i==0)
            return 0;
        else return 1;
    return 1;
}

int main()
{
	int x,i;
	cout<<"Enter value x"<<endl;
	cin>>x;

	for(i=2;i<=x;i++){
	int p = prime(i);
	if(p == 1)
		cout<<i<<" ";
	}
}