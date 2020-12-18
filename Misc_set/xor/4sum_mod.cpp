#include<bits/stdc++.h>
using namespace std;


int forsum(int a[],int n,int count,int sum)
{
	
	if(count==4&&sum==0)
	return 1;
	
	if(count>4||n==0)
	return 0;
	
	
	if(a[n-1]>sum)
	return forsum(a,n-1,count,sum);
	else
	return forsum(a,n-1,count+1,sum-a[n-1])+forsum(a,n-1,count,sum);
	
}

int main()
{
	
	int a[]={2,7,4,0,9,5,1,3};
	
	int s=sizeof(a)/sizeof(a[0]);
	
	cout<<forsum(a,s,0,20);
	
}
 
