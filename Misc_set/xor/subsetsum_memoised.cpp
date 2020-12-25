// subset sum problem
// check if given subset sum exists or not that ir return true or false
// incorrect

#include<bits/stdc++.h>
using namespace std;

int dp[101][101];


void display(vector<int>path)
{
	
	for(auto x:path)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}

bool subsetsum(int a[],int n,int sum)
{
	
	if(n>=0&&sum==0)
	return 1;
	
	if(n==0)
	return 0;
	
	if(dp[n][sum]!=-1)
	return dp[n][sum];
	
	if(a[n-1]>sum)
	return dp[n-1][sum]=subsetsum(a,n-1,sum);
	
	else
	return dp[n][sum-a[n-1]]=subsetsum(a,n-1,sum-a[n-1])||subsetsum(a,n-1,sum);
	
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
	
	memset(dp,-1,sizeof(dp));
	
	bool flag=subsetsum(a,n,sum);
	
	if(flag==false)
	{
		"No subset sum exists";
		return 0;
	}
	
	vector<int>p;
	
	printallsubsetsum(a,n,sum,p);
 } 
