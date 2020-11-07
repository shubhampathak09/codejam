// Egg dorpping problem
#include<bits/stdc++.h>
using namespace std;



int solve(int e,int f)
{
	int dp[e+1][f+1];
	memset(dp,-1,sizeof(dp));
	
	if(dp[e][f]!=-1)
	return dp[e][f];
	
	if(f==1||f==0)
	return dp[e][f]=f;
	
	if(e==1)
	return dp[e][f]=f;
	
	// drop from kth floor and fin min attempts
    int mn=INT_MAX;
	
	// min attempts in worst case
		
	for(int k=1;k<=f;k++)
	{
		//either egg breaks or egg doesn not break
		int temp=1+max(solve(e-1,k-1),solve(e,f-k));
	
	    mn=min(mn,temp);	
	}
	
	return dp[e][f]=mn;
}

int main()
{

cout<<solve(4,15);	
	
}

