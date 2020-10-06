#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n;
	int a[n+1];
	if((n*(n+1)%4)==0)
	{
		for (int i = 1; i <= n; ++i)
		{
			a[i]=i;
		}
		cout<<"YES"<<"\n";
		cout<<n/2<<"\n";
		x=n/2;
		for(int i=1;i<=x;i++)
		{
			if(i%2==0)
				y=i/2;
			else y=n-(i/2);
			a[y]=0;
			cout<<y<<" ";
		}
		cout<<"\n"<<n-x<<"\n";
		for(int i=1;i<=n;i++)
		{
			if (a[i]!=0)
			cout<<a[i]<<" ";
		}
	}
	else cout<<"NO";
}
