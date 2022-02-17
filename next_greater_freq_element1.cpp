#include<bits/stdc++.h>
using namespace std;

int main()
{
	//int arr[]={1,1,3,2,2,4,2};
	array<int,6> arr = {1, 2, 3, 4, 5, 6};
	int size = sizeof(arr)/sizeof(arr[0]);
	int length = arr.size();
	cout<<size<<" "<<length;
	int freq[5] = {0};
	stack<int> s;

	for(int i=0;i<size;i++)
	{
		freq[arr[i]]++;
	}

	s.push(0);
}