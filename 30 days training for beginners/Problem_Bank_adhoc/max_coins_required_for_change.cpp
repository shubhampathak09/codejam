// max coin change problem 
#include<bits/stdc++.h>
using namespace std;

// N = 10 and S = {2, 5, 3, 6}, there are five solutions:
//  {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. So the output should be 5.


int number_ways(int coins[],int n,int sum)
{
	int dp[n+1][sum+1];
	
	for(int i=0;i<=sum;i++)
    dp[0][i]=0;
	
	for(int i=1;i<=n;i++)
	dp[i][0]=1;
	
	dp[0][0]=1;
	
		
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
		
			
			if(coins[i-1]<=j)
			{
				dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];  //unbounded knapsack
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}

int main()
{
	
	int coins[]={2,5,3,6};
	int sum=10;
	
	int n=sizeof(coins)/sizeof(coins[0]);
	
	cout<<number_ways(coins,n,sum);
}
