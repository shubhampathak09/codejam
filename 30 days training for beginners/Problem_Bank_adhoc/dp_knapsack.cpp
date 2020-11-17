// top down

#include<bits/stdc++.h>
using namespace std;


int knapsack(int wt[],int val[],int w,int n)
{
	
	int dp[n+1][w+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			
			else if(wt[i-1]>j)
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
			}
		}
	}
	return dp[n][w];
}

int main()
{
	int value[]={60,100,120};
    int wt[]={10,20,30};
    int w=50;
    
    int n=3;
    
    cout<<knapsack(wt,value,w,n);
    
    
}
