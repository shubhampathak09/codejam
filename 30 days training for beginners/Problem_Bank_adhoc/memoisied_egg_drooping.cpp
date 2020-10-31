#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int solve(int e,int f)
{
	if(f==1||f==0)
	return f;
	
	
	
	if(e==1)
	return f;
	
	if(dp[e][f]!=-1)
	return dp[e][f];
	
	int mn=INT_MAX;
	
	for(int k=1;k<=f;k++)
	{
		int temp=1+max(solve(e-1,k-1),solve(e,f-k));
		mn=min(mn,temp);
	}
	
	return dp[e][f]=mn;
}

int main()
{
	memset(dp,-1,sizeof(dp));
	
	int ans=solve(2,10);

   cout<<ans;
}
