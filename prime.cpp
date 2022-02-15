#include<bits/stdc++.h>
using namespace std;

int prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)  //not prime
            return 0;
    }
    return 1;      //prime
}

int main()
{
	int n,i;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(prime(i))
            cout<<i<<endl;
    }
//     }
//     if(prime(n))
//         cout<<"yes it is prime";
//     else
//         cout<<"no it is not prime";
}


