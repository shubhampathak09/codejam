#include<bits/stdc++.h>
using namespace std;

int dp[101][101];


void printsubset(vector<int>a)
{
	
	for(auto x:a)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}


bool subsetsum(int a[],int n,int sum)
{
	
 for(int i=0;i<=sum;i++)
 dp[0][i]=0;
 
 for(int i=0;i<=n;i++)
 dp[i][0]=1;
 
 for(int i=1;i<=n;i++)
 {
 	for(int j=1;j<=sum;j++)
 	{
 		if(a[i-1]<=j)
 		{
 			dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
		 }
		 else
		 dp[i][j]=dp[i-1][j];
	 }
 }
 
 return dp[n][sum];
	
}



void printsubsetsum(int a[],int i,vector<int>&p,int sum)
{
	
	if(i==1&&sum>0&&dp[i][sum]==1)
	{
		p.push_back(a[i-1]);
		printsubset(p);
		return;
	}
	if(i==1&&sum==0)
	{
		printsubset(p);
		return;
	}
	
	if(dp[i-1][sum]==1)
	{
		vector<int>temp=p;
		printsubsetsum(a,i-1,temp,sum);
	}
	
	if(a[i-1]<=sum&&dp[i][sum-a[i-1]]==1)
	{
		p.push_back(a[i-1]);
	    printsubsetsum(a,i-1,p,sum-a[i-1]);
	}
	
}

int main()
{
	
	int a[]={1,2,3,4,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int sum=10;
	
	bool flag=subsetsum(a,n,sum);
	vector<int>p;
	
    printsubsetsum(a,n,p,sum);	
    
	
}
