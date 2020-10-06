#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int x,c=0,prev;
	cin>>x;
	long long int a[x];
	for(int i=0;i<x;i++)
		cin>>a[i];
	prev=a[0];
	for (int i=1;i<x;i++)
	{
		if (prev>a[i])
		{
			int temp=prev-a[i];
			c+=temp;
		}
		else
			prev=a[i];
	}
	cout<<c;
	return 0;
}