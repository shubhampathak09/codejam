#include<bits/stdc++.h>
using namespace std;

bool subsetsum(int a[],int n,int sum)
{
	
	int dp[n+1][sum+1];
	
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=1;
	}
	
	for(int i=1;i<=sum;i++)
	dp[0][i]=0;
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
		{
			if(a[i-1]>j)
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
			}
		}
	}
	
	return dp[n][sum];
}

bool canpartition(int nums[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	sum+=nums[i];
	
	if(sum&1)
	return false;
	
	else
	{
		
	 
		return subsetsum(nums,n,sum/2);
		
	}
	
}

int main()
{
	
	int a[]={1,2,3,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<canpartition(a,n);
}
