#include<bits/stdc++.h>
using namespace std;
string func(int x,int y)
{
	if(x==0&&y==0) return "YES";
	if(x==0||y==0) return "NO";
	if (x<y&&2*x<y) return "NO";
	if(y<x&&2*y<x) return "NO";
	if(y==2*x || x==2*y) return"YES";
	else if((x+y)%3==0) return "YES";
	else return "NO";
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int x,ctr=0;
	cin>>x;
	while(x--)
	{
		int x,y;
		cin>>x>>y;
		cout<<func(x,y)<<"\n";
	}
}