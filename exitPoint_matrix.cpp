#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[4][4] = {{0,0,1,0},{1,0,0,1},{0,0,0,1},{1,0,1,0}};

	int dir=0,i=0,j=0; //dir=0:east, dir=1:south, dir=2:west, dir=3:north

	while(true)
	{
		dir = (dir + arr[i][j])% 4 ;

		if(dir==0)
			j++;
		else if(dir==1)
			i++;
		else if(dir==2)
			j--;
		else if(dir==3)
			i--;

		if(i<0)
		{
			i++;
			break;
		}
		else if(j<0)
		{
			j++;
			break;
		}
		else if(i==4)
		{
			i--;
			break;
		}
		else if(j==4)
		{
			j--;
			break;
		}
	}
	cout<<i<<" "<<j;
}