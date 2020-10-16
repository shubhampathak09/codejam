// kadanes algorithm

#include<bits/stdc++.h>
using namespace std;

int kandanes(int a[],int n)
{
	
	int curr_sum=a[0];
	int max_sum=a[0];
	
	for(int i=0;i<n;i++)
	{
		curr_sum=max(a[i],a[i]+curr_sum);
		max_sum=max(curr_sum,max_sum);
	}
	
	return max_sum;
}

int main()
{
	int a[]={-2,1,-3,4,-1,2,1,-5,4};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int mx=kandanes(a,n);
	
	cout<<mx;
	
}
