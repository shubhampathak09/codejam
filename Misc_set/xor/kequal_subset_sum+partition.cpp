// k equal subset sum partition

#include<bits/stdc++.h>
using namespace std;

bool subsetsum(int a[],int n,int sum)
{
	int dp[n+1][sum+1];
	
	for(int i=0;i<=sum;i++)
	dp[0][i]=0;
	
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(a[i-1]<=j)
			{
				dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	
	return dp[n][sum];
}

bool kequalsubset(int a[],int n,int k)
{
	
	int sum=0;
	
	for(int i=0;i<n;i++)
	sum+=a[i];
	
	if(sum%k!=0)
	return false;
	
	else
	return subsetsum(a,n,sum/k);
	
}

int main()
{
	
	int a[]={4,3,2,3,5,2,1};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int k=4;
	
	cout<<kequalsubset(a,n,k);
	
}
