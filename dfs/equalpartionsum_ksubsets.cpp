#include<bits/stdc++.h>
using namespace std;


int subset(int a[],int sum,int n)
{
	
	bool dp[sum+1][n+1];

    for(int i=0;i<=sum;i++)
	dp[0][i]=0;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;	
    
    if(a[n-1]>sum)
    {
    cout<<"No such subset";	
    return 0;
}
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=sum;j++)
    	{
    	  if(a[i-1]<=j)
		  dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
		  else
		  dp[i][j]=dp[i-1][j];		
		}
	}
            return dp[n][sum]; 
	}
	


int main()
{
	
	int k=3;
	int a[]={2,1,5,5,6};
	int total=0;
	
    	
	
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	
	for(int i=0;i<n;i++)
	total+=a[i];
	int sum=total/k;
	
	if(total%k==0)
	{
	    
		cout<<subset(a,sum,n);
	}
	
	else
	{
		cout<<"No such subset";
	}
	
}
