// count of subset s
//#subsets
// find how many subsets there equal to given sum
//f->0
//t- >0

#include<bits/stdc++.h>
using namespace std;


int count(int a[],int n,int target)
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
	int a[]={1,2,3,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int target=6;
	
	cout<<count(a,n,target);

}
 
