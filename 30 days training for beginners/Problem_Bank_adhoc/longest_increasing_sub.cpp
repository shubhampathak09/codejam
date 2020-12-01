// longest increasing subsequence

#include<bits/stdc++.h>
using namespace std;


int longest_increasing_subsequence(int a[],int n)
{
	
	int dp[n];
	
	
	
	for(int i=0;i<n;i++)
	dp[i]=1;
	
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				dp[i]=max(dp[i],1+dp[j]);
			}
		}
	}
	int mx=INT_MIN;
	for(int i=0;i<n;i++)
	{
//	 cout<<dp[i]<<" ";
     mx=max(mx,dp[i]);
	}
	
	return mx;
}

int main()
{
	
	int a[]={3,10,2,1,20};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<longest_increasing_subsequence(a,n);
	
}
