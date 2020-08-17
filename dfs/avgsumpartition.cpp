//// partition into two subsets such that there average is same
//
//// s1->m s2->n-m and s1+s2=s
////s1/m=s2/n-m
//// ms2=ns1-ms1=> ms=s1n
//// s1= (m/n)*s
//
//m-> 0 to n
//
//int s=toatlsum;
//{
//}
//for(int m=0;m<=n;m++)
//{
//	int W=m*s/n;
//	if(subsetsum(set,W,n)==true)
//	{
//		cout<<"Yes"
//		return true;
//	}
//}
//
//return false;
//}



// code begin here
#include<bits/stdc++.h>


using namespace std;


bool subsetsum(int a[],int W,int n)
{
	bool dp[n+1][W+1];
	
	for(int i=0;i<=W;i++)
	dp[0][i]=0;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
			if(a[i-1]<j)
			dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][W];
}

bool avgsumpartition(int a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	s+=a[i];
	for(int m=0;m<=n;m++)
	{   int W=(m*s)/n;
		if(subsetsum(a,W,n)==true)
		{
			//cout<<"yes Possible to partiton into two subset with equal average ";
			return true;
			break;
		}
	}
	return false;
}
int main()
{
	
	int a[]={1,7,15,29,11,9};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<avgsumpartition(a,n);
	
}
