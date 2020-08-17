// count subset sum with diff =k
// s1-s2=k > S-2s=k=>s-k/2

#include<bits/stdc++.h>
using namespace std;


int countsubsetsum(int a[],int n,int W)
{
	
	int dp[n+1][W+1];
	for(int i=0;i<=W;i++)
	dp[0][i]=0;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
			if(a[i-1]<=j)
			{
				dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	
	return dp[n][W];
}

int main()
{
	int a[]={1,1,2,3};
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int k=1;
	
     int sum=0;
     for(int i=0;i<n;i++)
     sum+=a[i];
     
     int T=(sum-k)/2;
     
	 cout<<countsubsetsum(a,n,T);
	
}
