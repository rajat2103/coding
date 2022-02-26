#include<bits/stdc++.h>
using namespace std;

int main()
{
	char arr[4][4] = {{'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'},{'m','n','o','p'}};
	//int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=0;i<4;i++)
	{
		for(int j=i;j<4;j++)
		{
			char temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}

	cout<<"After transpose"<<endl;

	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}