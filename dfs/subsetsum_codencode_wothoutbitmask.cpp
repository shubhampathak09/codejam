
#include<bits/stdc++.h>
using namespace std;

int coinsum(int a[],int change,int n)
{
	
	int dp[n+1][change+1];
	
	for(int i=0;i<=change;i++)
	dp[0][i]=0;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=change;j++)
		{
			if(a[i-1]<=j)
			{
				dp[i][j]=dp[i][j-a[i-1]]+dp[i-1][j];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	
	//cout<<dp[n][change];
	return dp[n][change];
}


int main()
{
	
	int a[]={1,2,3};
	int sum=4;
	int n=3;
	
	cout<<coinsum(a,sum,n);
	
}
