#include<bits/stdc++.h>
using namespace std;

int prime(int x)
{
    for(int i=2;i<x;i++)
        if(x%i==0)
            return 0;
        else return 1;
    return 1;
}

int main()
 {
    int x;
    cout<<"Enter any number"<<endl;
    cin>>x;

    int p= prime(x);
    if(p==0)
        cout<<"Not prime";
    else
        cout<<"It is prime";
 }