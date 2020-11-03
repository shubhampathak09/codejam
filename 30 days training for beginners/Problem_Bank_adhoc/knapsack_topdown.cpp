// top down
#include<bits/stdc++.h>
using namespace std;

//int dp[100][100];

int knapsack(int val[],int wt[],int W,int n)
{
    int dp[n+1][W+1];	
	// initialise
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		if(i==0||j==0)
		dp[i][j]=0;
		
		else if(wt[i-1]>W)
		dp[i][j]=dp[i-1][j];
		
		else
		dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
	}
	return dp[n][W];
}

int main()
{
	
	//	memset(dp,-1,sizeof(dp));
	int value[]={60,100,120};
	int weight[]={10,20,30};
	
   	int W=50;
   	
   	int n=sizeof(value)/sizeof(value[0]);
   	
   	
    cout<<knapsack(value,weight,50,n);	
}
