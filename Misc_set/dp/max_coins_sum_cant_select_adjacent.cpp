#include<bits/stdc++.h>
using namespace std;


int solve(int a[],int n)
{
	int dp[n+1];
	
	dp[0]=0;
    dp[1]=a[0];
    
    for(int i=2;i<=n;i++)
    {
    	dp[i]=max(a[i-1]+dp[i-2],dp[i-1]);
	}
	
	return dp[n];
}

int main()
{
	
	
	int a[]={2,3,1,4,5,7};
	
	// given sum coins ,find max sum with selecting adjacent coins or conseuctive 2 coins together
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<solve(a,n);
	
	
}
