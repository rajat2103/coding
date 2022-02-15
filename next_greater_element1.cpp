#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr1[]={5,4,7,9,2,12};
	int size = sizeof(arr1)/sizeof(arr1[0]);
	int next;
	
	for(int i=0;i<size;i++)
	{
		next = -1;
		for(int j=i+1;j<size;j++)
		{
			if(arr1[i]<arr1[j])
				{
					next=arr1[j];
					break;
				}
		}
		cout<<arr1[i]<<"-: "<<next<<endl;
	}
}