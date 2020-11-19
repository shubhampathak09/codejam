#include<bits/stdc++.h>
using namespace std;


int findsum(int a[],int start,int end)
{
	int sum=0;
	for(int i=start;i<=end;i++)
	sum+=a[i];
	return sum;
}

int mintimetopaint(int a[],int n,int k)
{
	if(k==1)
	return findsum(a,0,n-1);
	
	if(n==1)
	{
		return a[0];
	}
	
	int best=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		best=min(best,max(mintimetopaint(a,i,k-1),findsum(a,i,n-1)));
	}
	return best;
}

int main()
{
	int k=3;
	int a[]={10,20,30,40};
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<mintimetopaint(a,n,k);
	
}
