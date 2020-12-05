// largest subset sum

#include<bits/stdc++.h>
using namespace std;

int largest_subset(int a[],int n)
{
	
	int dp[n+1];
	
	dp[0]=0; // indicates an empty subset
	
	dp[1]=a[0]; // if only one element in subset, this will be subset sum
	
	// incorrect
	
	for(int i=2;i<=n;i++)
	{
		dp[i]=max(max(dp[i-2]+a[i-1],max(a[i-1],dp[i-1])),dp[i-2]);  //for handling if only negetive elements
	}
	return dp[n];
}
int main()
{
  //  int a[]={-3,1,2,3,0};	// dp[0]=0  dp[1]=-3, dp[2]=1 dp[3]=2 dp[4]=
	int a[]={5,1,1,5};
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<largest_subset(a,n);
}
