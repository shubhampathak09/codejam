
#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];

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
		mn=min(temp,mn);
	}
	return dp[e][f]=mn;
}

int main()
{
	int e=2;
	int n=10;
	
	memset(dp,-1,sizeof(dp));
	
	cout<<solve(2,100);
	
}
