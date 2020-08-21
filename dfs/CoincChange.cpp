// Coin change
// Unbound knapsack !!!!!!!care obs3rv3 subs3t sum car3fully
#include<bits/stdc++.h>
using namespace std;


int coinchange(int a[],int C,int n)
{
	
	int dp[n+1][C+1];
	
	for(int i=0;i<=C;i++)
	dp[0][i]=0;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=C;j++)
		{
			if(a[i-1]<=j)
			{
				dp[i][j]=dp[i][j-a[i-1]]+dp[i-1][j];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][C];
}

int main()
{
	
	int N=4;
	int coin[]={1,2,3};
	int s=sizeof(coin)/sizeof(coin[0]);
	cout<<coinchange(coin,N,s);
	
}
