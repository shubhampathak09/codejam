
#include<bits/stdc++.h>

using namespace std;

int t[1001][1001];

int mcm(int a[],int i,int j)
{
	if(i>=j)
	return 0;
	
	if(t[i][j]!=-1)
	return t[i][j];
	
	int cost;
	int mincost=INT_MAX;
	for(int k=i;k<j;k++)
	{
	cost=mcm(a,i,k)+mcm(a,k+1,j)+a[i-1]*a[k]*a[j];
	if(cost<mincost)
	mincost=cost;	
	}
	
	return t[i][j]=mincost;
}

int main()
{
	memset(t,-1,sizeof(t));
	
	int a[]={1,2,3,4,3};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<mcm(a,1,n-1);
	
}
