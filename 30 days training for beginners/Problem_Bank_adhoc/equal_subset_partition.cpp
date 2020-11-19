#include<bits/stdc++.h>
using namespace std;

bool equalsubset_partition(int ele[],int n,int target)
{
	
//	if(target==0)
//	return 1;
	
int dp[n+1][target+1];

for(int i=0;i<=n;i++)
dp[i][0]=1;
for(int j=1;j<=target;j++)
dp[0][j]=0;

for(int i=1;i<=n;i++)
{
	for(int j=1;j<=target;j++)
	{
		if(ele[i-1]>j)
		{
			dp[i][j]=dp[i-1][j];
		}
		else
		dp[i][j]=dp[i-1][j]||dp[i-1][j-ele[i-1]];
	}
}
    return dp[n][target];
	 } 	

int main()
{
	int ele[]={1,5,11,5,1};
	
	int sum=0;
	int n=sizeof(ele)/sizeof(ele[0]);
	
	for(int i=0;i<n;i++)
	{
		sum+=ele[i];
	}
	
	if(sum&1)
	{
		cout<<"equal partiton not possible";
	}
	
	else
	{
	
	int target=sum/2;
	cout<<equalsubset_partition(ele,n,target);
}
}
