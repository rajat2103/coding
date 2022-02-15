#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={5,4,7,9,12,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	stack<int> s;
	s.push(arr[0]);

	for(int i=1;i<size;i++)
	{
		while(!s.empty() && s.top()<arr[i])
		{
			cout<<s.top()<<"-: "<<arr[i]<<endl;
			s.pop();
		}
		s.push(arr[i]);
	}

	while(!s.empty())
	{
		cout<<s.top()<<"-: "<<"-1"<<endl;
		s.pop();
	}
}