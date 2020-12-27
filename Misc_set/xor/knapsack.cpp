#include<bits/stdc++.h>
using namespace std;


int knapsack(int val[],int n,int wt[],int W)
{
	int dp[n+1][W+1];
	
	for(int i=0;i<=W;i++)
	{
		dp[0][i]=0;
	}
	for(int i=1;i<=n;i++)
	dp[i][0]=0;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
			if(wt[i-1]>j)
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
			}
		}
	}
	return dp[n][W];
}

int main()
{
	
	int a[]={60,100,120};
	int wt[]={10,20,30};
	
	int W=50;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<knapsack(a,n,wt,W);
}
