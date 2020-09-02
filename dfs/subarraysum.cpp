// max array subsum

#include<bits/stdc++.h>
using namespace std;

int max_subsum(int a[],int n)
{
	
	int current_sum=a[0];
	int result=a[0];
	for(int i=1;i<n;i++)
	{
//	 current_sum=current_sum+a[i];
	 current_sum=max(current_sum+a[i],a[i]);
	 result=max(result,current_sum);
	}
	
	return result;
}

int main()
{
	
	int a[]={-2,-3,4,-1,-2,1,5,-3};
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<max_subsum(a,n);
	
}
