#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n-1;i++)
	{	cin>>a[i];
		sum+=a[i];
	}
	cout<<(n*(n+1)/2)-sum;
	return 0;
}
