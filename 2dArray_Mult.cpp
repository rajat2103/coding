#include<bits/stdc++.h>
using namespace std;

int main()
{
	int one[2][3] = {{1,2,3},{4,5,6}};
	int two[3][3] = {{7,8,9},{10,11,12},{13,14,15}};
	int prd[2][3]= {0};

	//cout<<one.size()<<" "<<one[0].size();

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
				prd[i][j] += one[i][k]*two[k][j];
		}
	}

		for(int i=0;i<2;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<prd[i][j]<<" ";
			}
			cout<<endl;
		}
}