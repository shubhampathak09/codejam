// subset sum

#include<bits/stdc++.h>
using namespace std;


bool subsetsum(int set[],int n,int target)
{
//	if(target==0)
//	return true;
    int dp[n+1][target+1];	
//	if(n==0)
//	return false;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	for(int j=1;j<=target;j++)
	dp[0][j]=0;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=target;j++)
		{
			 if(set[i-1]<=j)
			 {
			 	dp[i][j]=dp[i-1][j]||dp[i-1][j-set[i-1]];
			 }
			 else
			 dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][target];
}

int main()
{
	
	int set[] = {3, 34, 4, 12, 5, 2};
	
	int n=sizeof(set)/sizeof(set[0]);
	
	int target=38;
	
	cout<<subsetsum(set,n,target);
	
}
