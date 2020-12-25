// top down 

#include<bits/stdc++.h>
using namespace std;

int dp[101][101];


void display(vector<int>path)
{
	
	for(auto x:path)
	cout<<x<<" ";
	cout<<endl;
}

bool subsetsum(int a[],int n,int sum)
{
	
//	int dp[n+1][sum+1];
	
	
	for(int i=0;i<=sum;i++)
	dp[0][i]=0;
	
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			
//			if(j==0)
//			dp[i][j]=1;
//			
//			if(i==0)
//			dp[i][j]=0;
			
			if(a[i-1]>j)
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
			}
		}
	
	}
		return dp[n][sum];
}


void printallsubsetsum(int a[],int i,int sum,vector<int>&path)
{

// base cases

if(i==1&&sum>0&&dp[1][sum]==1)
{
	
	path.push_back(a[i-1]);
	display(path);
	return;
}

// original base case
if(i==1&&sum==0)
{
	display(path);
	return;
}

// if i ignore

if(dp[i-1][sum]==1)
{
	vector<int>b=path;
	printallsubsetsum(a,i-1,sum,b);
}
// if i consider current element
if(sum>=a[i-1]&&dp[i-1][sum-a[i-1]])
{
	path.push_back(a[i-1]);
	printallsubsetsum(a,i-1,sum-a[i-1],path);
}
	
}


int main()
{
	
	int a[]={1,2,3,4,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int sum=10;
	
	bool flag=subsetsum(a,n,sum);
	vector<int>p;
	
    printallsubsetsum(a,n,sum,p);	
    
    
}
