#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,out,last;
    int size,ctr=0;
    cin>>s;
    size=s.size();
    vector<int> alph(26,0);
    for(int i=0;i<size;i++)
    {
        alph[s[i]-'A']++;
    }
    for(int i=0;i<26;i++)
    {
        if(alph[i]%2==0)
        {
            for(int j=0;j<alph[i]/2;j++)
            out+=('A'+i);
        }
        else
        {
            
            for(int j=0;j<alph[i];j++)
            last+=('A'+i);
            ctr++;
        }
    }
    if((size%2==0&&ctr==0)||(size%2!=0&&ctr==1))
    {
        
        cout<<out<<last;
        reverse(out.begin(),out.end());
        cout<<out;
    }
    else
    {
        cout<<"NO SOLUTION";
    }
    
}