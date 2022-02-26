#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int tne = 16;
	int minr=0,minc=0,maxr=3,maxc=3,cnt=0,i,j;

	while(cnt<tne)
	{	
		//leftWall
		for(i=minr,j=minc;i<=maxr && cnt<tne;i++)
		{
			cout<<arr[i][j]<<endl;
			cnt++;
		}
		minc++;

		//bottomWall
		for(i=maxr,j=minc;j<=maxc && cnt<tne;j++)
		{
			cout<<arr[i][j]<<endl;
			cnt++;
		}
		maxr--;

		//rightWall
		for(i=maxr,j=maxc;i>=minr && cnt<tne;i--)
		{
			cout<<arr[i][j]<<endl;
			cnt++;
		}
		maxc--;

		//upperWall
		for(i=minr,j=maxc;j>=minc && cnt<tne;j--)
		{
			cout<<arr[i][j]<<endl;
			cnt++;
		}
		minr++;
	}

}