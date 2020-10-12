// classical dp-lis problem

#include<bits/stdc++.h>
using namespace std;


int lis(int a[],int n)
{
	int dp[n];
	dp[0]=1;
	
	for(int i=1;i<n;i++)
	{
		dp[i]=1;
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j]&&dp[i]<dp[j]+1)
			{
				dp[i]=dp[j]+1;
			}
		}
	}
	
	int mx=dp[0];
	for(int i=1;i<n;i++)
	{
		mx=max(mx,dp[i]);
	}
	return mx;
}

int main()
{
	
	int a[]={4,5,1,2,3,6,7,1,9,0};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	
	cout<<lis(a,n);
	
}
