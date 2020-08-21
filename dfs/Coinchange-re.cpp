// Coin change
#include<bits/stdc++.h>
using namespace std;


int countways(int coins[],int N,int n)
{
	
	int dp[n+1][N+1];
	
	for(int i=0;i<=N;i++)
	dp[0][i]=0;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=N;j++)
		{
			if(coins[i-1]<=j)
			{
				dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
			}
			else
			   dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][N];
}

int main()
{
	
	int N=10;
	int s[]={2,5,3,6}; // 2 2 2 2 2  2 2 6  2 3 5  5 5  3 3 2 2
	int n=4;
	cout<<countways(s,N,n);
	
}
