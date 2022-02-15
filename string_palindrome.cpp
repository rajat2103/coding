#include<bits/stdc++.h>
using namespace std;

int palindrome(string s)
{
		int size = s.length();
	for(int i=0;i<size;i++)
	{
		if(s[i] != s[size-i-1])
			return 0;		
	}
 return 1;
}
int main()
{
	string s;
	cout<<"Enter string s"<<endl;
	cin>>s;
	int p = palindrome(s);
	if(p==0)
		cout<<"Not palindrome";
	else
		cout<<"Palindrome";
}