#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int x,ctr=0;
	cin>>x;
	for(int i=5;i<=x;i=i*5)
	{
		ctr=ctr+x/i;
	}
	cout<<ctr;
	return 0;
}