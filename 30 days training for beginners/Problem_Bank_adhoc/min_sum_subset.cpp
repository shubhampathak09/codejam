// minium subset diff

#include<bits/stdc++.h>
using namespace std;

// min subset sum possible

int abs(int a)
{
	if(a>=0)
	return a;
	else
	return -1*a;
}


int subsetsum(int a[],int n,int target)
{
	
	int dp[n+1][target+1];
	
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=1;
	}
	for(int j=1;j<=target;j++)
	dp[0][j]=0;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=target;j++)
		{
			if(a[i-1]<=j)
			{
				dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
			}
			else
			    dp[i][j]=dp[i-1][j];
		}
	}
	
	
	int diff=INT_MAX;
	
	for(int i=target/2;i>=0;i--)
	{
		if(dp[n][i]==true)
		{
			diff=abs(target-2*i);
			break;
		}
	}
	
	return diff;
}

 
int main()
{

int a[]={1,2,7};
int target=0;

int n=sizeof(a)/sizeof(a[0]);

for(int i=0;i<n;i++)
target+=a[i];

//solve(a,t,n);	

cout<<subsetsum(a,n,target);	
}
