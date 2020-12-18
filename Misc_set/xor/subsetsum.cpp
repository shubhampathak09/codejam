#include<bits/stdc++.h>
using namespace std;



int subsetsum(int a[],int n,int sum)
{
	
	if(sum==0)
	return 1;
	
	if(n==0&&sum>0)
	return 0;
	
	if(a[n-1]>sum)
	return subsetsum(a,n-1,sum);
	else
	return subsetsum(a,n-1,sum-a[n-1])+subsetsum(a,n-1,sum);
	
	
}

int main()
{
	
	int set[] = {3, 34, 4, 12, 5, 2};// sum = 9
	
	int n=sizeof(set)/sizeof(set[0]);
	
	
	cout<<subsetsum(set,n,9);
	
}
