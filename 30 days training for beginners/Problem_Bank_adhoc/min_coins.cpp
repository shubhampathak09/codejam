// minimum numnber of coins required
#include<bits/stdc++.h>
using namespace std;


//coins-> 1 2 3 4 5
//11->  0  1  2   3  4  5  6  7  8  9  10  11
//dp[]  0  min(1+dp[],) 

#define INF 1e7
int mincoins(int coins[],int sum)
{
	int n=sizeof(coins)/sizeof(coins[0]);
	int dp[sum+1][n+1];
	memset(dp,INF,sizeof(dp));
	for(int i=0;i<=sum;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0)
			dp[i][j]=0;
			
			if(i==1)
			dp[i][j]=1;
			
			if(coins[j-1]<=i)
			dp[i][j]=min(1+dp[i-coins[j-1]][i],dp[i][j-1]);
			else
			dp[i][j]=dp[i][j-1];
		}
	}
	return dp[sum][n];
}

int main()
{
	
	
	int sum=11;
	int coins[]={1,2,5};
	int n=3;
	
	cout<<mincoins(coins,sum);
}
