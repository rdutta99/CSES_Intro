#include<bits/stdc++.h>
using namespace std;
#define IO {ios_base::sync_with_stdio(false); cin.tie(0);}
int main(int argc, char const *argv[])
{
	IO;
	long long int x,ans=0;
	cin>>x;
	long long int a[x][2];
	for(int i=0;i<x;i++)
		cin>>a[i][0]>>a[i][1];
	for(int i=0;i<x;i++)
	{
		if(a[i][0]>=a[i][1])
		{
			long long int dia=((a[i][0]-1)*((a[i][0]-1)*2+2))/2;
			dia++;
			if(a[i][0]%2==0)
			{
				ans=dia+(a[i][0]-a[i][1]);
			}
			else
				ans=dia-(a[i][0]-a[i][1]);		
		}
		else
		{
			long long int dia=((a[i][1]-1)*((a[i][1]-1)*2+2))/2;
			dia++;
			if(a[i][1]%2==0)
			{
				ans=dia-(a[i][1]-a[i][0]);
			}
			else
				ans=dia+(a[i][1]-a[i][0]);			
		}
		cout<<ans<<"\n";
	}
}