#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int x;
	cin>>x;
	cout<<endl;

	int i=0,j=3;

	while(i<4 && j>=0)
	{
		if(x==arr[i][j])
		{
			cout<<i<<" "<<j;
			return 1;
		}
		else if(x<arr[i][j])
			j--;
		else
			i++;
	}
	cout<<"Not found";
}