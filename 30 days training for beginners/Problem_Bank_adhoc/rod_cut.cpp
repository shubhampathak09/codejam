// rod cutting problem

#include<bits/stdc++.h>
using namespace std;


int unbound_knapsack(int price[],int n)
{
	int dp[n+1][n+1];
	
	// olength rod
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
            dp[i][j]=0;
            
            else if(i<=j)
            {
            	dp[i][j]=max(dp[i-1][j],price[i-1]+dp[i][j-i]);
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][n];
}


int main()
{
	
int length=8;

int price[]={1,5,8,9,10,17,17,20};

cout<<unbound_knapsack(price,length);
	
}
