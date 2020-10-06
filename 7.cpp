#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int x;
	cin>>x;
	long long int temp=0;
	// for(int i=1;i<x+1;i++)
	// {
	int i=x;
		temp=((i*i)*(i*i-1))/2;
		temp=temp-((i-1)*(i-2)*4);
		cout<<temp<<"\n";
	//}
}