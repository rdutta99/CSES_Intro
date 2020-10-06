#include<bits/stdc++.h>
using namespace std;
#define IO {ios_base::sync_with_stdio(false); cin.tie(0);}
int main(int argc, char const *argv[])
{
	IO;
	long long int x,k=0,k1=0;
	cin>>x;
	int a[x],b[x];
	if(x==1)
		cout<<"1";
	if(x==4)
		cout<<"2 4 1 3";
	if(x<5)
		cout<<"NO SOLUTION";
	else{
	for(int i=1;i<=x;i++)
	{
		if(i%2!=0)
		{	
			a[k]=i;
			k++;
		}
		else
		{
			b[k1]=i;
			k1++;
		}
	}
	for(int i=0;i<k;i++)
		cout<<a[i]<<" ";
	for(int i=0;i<k1;i++)
		cout<<b[i]<<" ";
	}
}
