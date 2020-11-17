// knapsack max profit
#include<bits/stdc++.h>
using namespace std;

int dp[102][102];


int knapsack(int wt[],int val[],int w,int n)
{
	// base conditions
	
	if(n==0||w==0)
	return 0;

    if(dp[n][w]!=-1)
	return dp[n][w]; 
	
	if(wt[n-1]>w)
	return dp[n][w]=knapsack(wt,val,w,n-1);
	
	else
	{
		return dp[n][w]=max(knapsack(wt,val,w,n-1),val[n-1]+knapsack(wt,val,w-wt[n-1],n-1));
	}
}

int main()
{

memset(dp,-1,sizeof(dp));
int value[]={60,100,120};
int wt[]={10,20,30};
int w=50;

int n=sizeof(wt)/sizeof(wt[0]);

cout<<knapsack(wt,value,w,n);

}
