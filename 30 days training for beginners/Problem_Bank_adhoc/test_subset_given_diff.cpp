#include<bits/stdc++.h>
using namespace std;


int subset_count(int a[],int n,int target)
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
				dp[i][j]=dp[i-1][j]+ dp[i-1][j-a[i-1]];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][target];
}

int main()
{
	
//
//	let say sum=0;
	
	//cout<<1;
	
int sum=0;

int a[]={1,1,2,3};

int n=sizeof(a)/sizeof(a[0]);

for(int i=0;i<n;i++)
sum+=a[i];

int diff=1;

//cout<<sum;

int target=(sum+diff)/2;

cout<<subset_count(a,n,target);
	
}
