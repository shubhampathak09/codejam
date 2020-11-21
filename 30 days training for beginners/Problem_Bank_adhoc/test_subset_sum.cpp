// subset sum problrm
#include<bits/stdc++.h>
using namespace std;


int check(int a[],int n,int sum)
{
	
	int  dp[n+1][sum+1];
	
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int j=1;j<=sum;j++)
	dp[0][j]=0;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(a[i-1]<=j)
			{
				dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i-1]];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	
	return dp[n][sum];
}

int main()
{
	
	int a[]={2,3,1,4,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<check(a,n,6);
	
}
