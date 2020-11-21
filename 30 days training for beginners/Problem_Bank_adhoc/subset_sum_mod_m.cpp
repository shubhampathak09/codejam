
/*{1,7,5}
f1
1,7
1,5
7,5
1,7,5
 m=2
 */
/* n>m
 empty 2 elem 3 elem 1 +3+1 =5
 */
 // subset sum divisble divisle by M worst impl possible
 
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>dp;


bool subset(int a[],int n,int sum)
{
	dp.resize(n+1);
	for(int i=0;i<=n;i++)
	dp[i].resize(sum+1);
	
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int j=1;j<=sum;j++)
	dp[0][j]=0;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(a[i-1]<=j)
			{
				dp[i][j]=dp[i-1][j]||dp[i][j-a[i-1]];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][sum];
}

int main()
{

int a[]={2,1,3};

int n=sizeof(a)/sizeof(a[0]);

int tar=4;


cout<<subset(a,n,tar);

int sum=0;
for(int i=0;i<n;i++)
sum+=a[i];	
	
	bool flag=0;
	
	
for(int i=1;i<=sum;i++)
{
	if(subset(a,n,i)==true)
	{
		flag=1;
		break;
	}
	}
	
	if(flag==0)
	{
		cout<<"does not exists";
		}
		else 
		cout<<"exisits";
			
 } 
