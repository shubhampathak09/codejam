//s1 -s2 =x
//s1 + s2=t

//2s1=t+x
//s1=(t+x)/2

//count number of partionins with s1 & sum=(t+x)/2;

#include<bits/stdc++.h>
using namespace std;

int count_subsets(int a[],int n,int target)
{
	int dp[n+1][target+1];
	
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int j=1;j<=target;j++)
	dp[0][j]=0;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=target;j++)
		{
			if(a[i-1]<=j)
			{
				dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j];
							}
			else
			    dp[i][j]=dp[i-1][j];				
		}
	}
	
	return dp[n][target];
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout<<1;
	
	// something weird goin on getting ouptut of some other code
}
 
