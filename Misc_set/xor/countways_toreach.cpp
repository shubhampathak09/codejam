//

#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;

/*
int countways(int n)
{
	if(n==1||n==2||n==3||n==0)
	return n;
	
	return 1+countways(n-1)+countways(n-2)+countways(n-3);
	
}
*/

// optimiese

int countways(int n)
{
	int dp[n+1];
	
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	
	for(int i=4;i<=n;i++)
	{
		dp[i]=(dp[i-1]%mod+dp[i-2]%mod+dp[i-3]%mod+1)%mod;
	}
	
	return dp[n];
}
int main()
{
	
	
	int n;
	
	
	cout<<countways(4);
}
