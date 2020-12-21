// mcm

#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int solve(int a[],int i,int j)
{
	if(i>=j)
	return 0;
	
	if(dp[i][j]!=-1)
	return dp[i][j];
	
	int ans=INT_MAX;
	for(int k=i;k<=j-1;k++)
	{
		int tempans=solve(a,i,k)+solve(a,k+1,j)+a[i-1]*a[k]*a[j];
		if(tempans<ans)
		{
			ans=tempans;
		}
	}
	return dp[i][j]=ans;
}

int main()
{
	
	
	int a[]={40,20,30,10,30};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	memset(dp,-1,sizeof(dp));
	
	int i=1;
	int j=n-1;
	
	cout<<solve(a,i,j);
}
