
#include<bits/stdc++.h>
using namespace std;


int max_sub_sum(int a[],int n)
{
	
	int curr_sum=a[0];
	int max_sum=a[0];
	
	for(int i=1;i<n;i++)
	{
		curr_sum=max(a[i],a[i]+curr_sum);
		max_sum=max(max_sum,curr_sum);
	}
	
	return max_sum;
}


int main()
{
	 int a[] =  {-2, -3, 4, -1, -2, 1, 5, -3}; 
	 
	 int n=sizeof(a)/sizeof(a[0]);
	
	int mx=max_sub_sum(a,n);
	
	cout<<mx;
	
	
}
