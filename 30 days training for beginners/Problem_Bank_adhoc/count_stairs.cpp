#include<bits/stdc++.h>
using namespace std;

int dp[100];

int countways(int n)
{
	
	
	if(n==0||n==1)
	return 1;
	
	if(dp[n]!=-1)
	return dp[n];
	return dp[n]=countways(n-1)+countways(n-2);
}


int main()
{
	 int n=4;
	     
     memset(dp,-1,sizeof(dp));	
	cout<<countways(n);

	
}
