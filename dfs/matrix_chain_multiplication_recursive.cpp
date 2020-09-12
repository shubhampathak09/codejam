
#include<bits/stdc++.h>
using namespace std;

int minmultiplication(int a[],int i,int j)
{
	if(i>=j)
	return 0;
	int k;
	int cost=INT_MAX;
	int mincost;
	for(k=i;k<j;k++)
	{
		mincost=minmultiplication(a,i,k)+minmultiplication(a,k+1,j)+a[i-1]*a[k]*a[j];
		if(mincost<cost)
		cost=mincost;
	}
	return cost;
	
	
}


int main()
{
	int a[]={1,2,3,4,3};
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<minmultiplication(a,1,n-1);
	
}
