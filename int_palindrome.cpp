#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,digit,rev=0;
	cout<<"Enter value n"<<endl;
	cin>>n;

	int num = n;
	while(num!=0)
	{
		digit = num%10;
		rev = (rev*10) + digit;
		num = num/10;
	}

	if(n==rev)
		cout<<"The number is palindrome";
	else
		cout<<"Not palindrome";
}