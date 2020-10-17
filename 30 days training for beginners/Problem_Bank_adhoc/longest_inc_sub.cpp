#include<bits/stdc++.h>
using namespace std;



int longest_inc(int a[],int n)
{
	
	int dp[n+1];
	
	for(int i=0;i<=n;i++)
	dp[i]=1;
	dp[0]=0;
	int mx=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(a[i]>a[j])
			dp[j]++;
			mx=max(mx,dp[j]);
		}
	}
	return mx;
}

int main()
{
	
		int a[]={1,2,3,4,0,2,1,3,4,5,6,7,8,9,0};
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<longest_inc(a,n);
	
}
