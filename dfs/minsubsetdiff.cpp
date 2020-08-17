// count of subset sum diff equal to given sum

#include<bits/stdc++.h>
using namespace std;

int countsubsetsum(int a[],int W,int n){
	
	int dp[n+1][W+1];
	
	for(int i=0;i<=W;i++)
	dp[0][i]=0;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int i=1;i<=n;i++)
	for(int j=1;j<=W;j++)
	{
		if(a[i-1]<=j)
		dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i]];
		else
		dp[i][j]=dp[i-1][j];
		
	}
	return dp[n][W];
}


int main()
{
	
	int a[]={1,3,3,5,2,4,6};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<countsubsetsum(a,6,n);
}


