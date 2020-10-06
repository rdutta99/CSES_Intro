#include<bits/stdc++.h>
using namespace std;

int min_diff(vector<long long int> arr, int n)
{
    int count = pow(2, n);
    long long int sum1=0,sum2=0,ans=1e9,temp;
    for(int i=0;i<n;i++)
    sum1+=arr[i];
    for (int i = 0; i < count; i++) 
    {
        sum2=0;
        for (int j = 0; j < n; j++) 
        {
            if ((i & (1 << j)) != 0)
            {
                sum2+=arr[j];
                // cout << arr[j] << " ";
            }
        }
        temp=abs(sum1-(2*sum2));
        //cout<<temp;
        if(temp<ans)
        ans=temp;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<long long int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<min_diff(a,n);
    return 0;
}