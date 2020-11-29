
// min coins req??????? fuck 5-11-2020

// revisiting this on 29th nov 2020 

#include<bits/stdc++.h>
using namespace std;

// unobounded knapsack problem
/*
if(wt[i-1]<=j)
{
	dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i][j-wt[i-1]]);
}
else
dp[i][j]=dp[i-1][j]
*/


// need to initialise wit int_max-1 to prevent the overflow.....
int mincoinchange(int coins[],int sum,int n)
{
	
	int dp[n+1][sum+1];
	
	for(int i=0;i<=sum;i++)
	{
		dp[0][i]=INT_MAX-1;
	}
	for(int i=1;i<=n;i++)
	{
		dp[i][0]=0;
	}
	
	// extra condition for i=1 row and col 1 to N
	
	for(int j=1;j<=sum;j++)
	{
		if(j%coins[0]==0)
		{
			dp[1][j]=j/coins[0];
		}
		else
		dp[1][j]=INT_MAX-1;
	}
	
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(coins[i-1]<=j)
			{
				dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}

int main()
{
	
	
	int coins[]={25,10,5};
	
	int v=30;
	
	int n=sizeof(coins)/sizeof(coins[0]);
	
	cout<<mincoinchange(coins,v,n);
	
}
