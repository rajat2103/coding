#include<bits/stdc++.h>
using namespace std;

int main()
{
	char arr[4][4] = {{'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'},{'m','n','o','p'}};

	for(int i=0;i<4;i++)
	{
		for(int j=i;j<4;j++)
		{
			char temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}

	for(int i=0;i<4;i++)
	{
		int li=0,ri=3;
		while(li<ri)
		{
			char temp = arr[i][li];
			arr[i][li] = arr[i][ri];
			arr[i][ri] = temp;

			li++,ri--;
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