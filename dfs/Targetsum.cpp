#include<bits/stdc++.h>
using namespace std;

int count(int a[],int n,int w)
{
	
	int dp[n+1][w+1];
	for(int i=0;i<=w;i++)
	dp[0][i]=0;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(a[i-1]<=j)
		dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j];
		else
		dp[i][j]=dp[i-1][j];	
		}
	}
	return dp[n][w];
}

int main()
{
	
	int k=3;
	int a[]={1,1,1,1,1};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=0;
	for(int i=0;i<n;i++)
	sum+=a[i];
	int dk=(sum-k)/2;
	cout<<count(a,n,dk);
}
