#include<bits/stdc++.h>
using namespace std;

// second attempt at dp lol
// classicqal knapsack problem

//value[]={60,100,120}
//weight[]={10,20,30}

int dp[100][100];


int knapsack(int val[],int wt[],int W,int n)
{

	
    if(n==0||W==0)
	dp[n][W]=0;
	
	if(dp[n][W]!=-1)
	return dp[n][W];
	
	if(wt[n-1]>W)
	return dp[n][W]=knapsack(val,wt,W,n-1);
	
	// return max of two case when nth item is included & or not inclueded
	return dp[n][W]=max((knapsack(val,wt,W-wt[n-1],n-1))+val[n-1],knapsack(val,wt,W,n-1));
	
}
int main()
{
	memset(dp,-1,sizeof(dp));
	int value[]={60,100,120};
	int weight[]={10,20,30};
	
	int W=50;
	
	int n=sizeof(value)/sizeof(value[0]);
	
	int optimalWeight=knapsack(value,weight,W,n);
	
	cout<<optimalWeight;
}




//recursive impls
/*
int knapsack(int val[],int wt[],int n,int W)
{
	if(n==0||W==0)
	return 0;
	
	if(wt[n-1]>W)
	return knapsack(val,wt[],n-1,W);
	
	return max(knapsack(val,wt,n-1,W),val[n-1]+knapsack(val,wt,n-1,W-wt[n-1]));
	
}*/
