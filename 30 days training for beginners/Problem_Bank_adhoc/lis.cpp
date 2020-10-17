#include<bits/stdc++.h>
using namespace std;
// lis-> longest increasing substring
// looool
// longest increasing substring

int lis(int a[],int n)
{
	int dp[n+1];
	dp[0]=0;
	for(int i=1;i<=n;i++)
	dp[i]=1;
	int mx=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]<a[j+1])  // checking for substring
			dp[j+1]=1+dp[j];
			mx=max(mx,dp[j+1]);
		}
	}
	return mx;
}

int main()
{
	
	int a[]={1,2,3,4,0,2,1,3,4,5,6,7,8,9,0};
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<lis(a,n);
}
