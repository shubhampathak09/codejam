// max subrarray sum=0;
#include<bits/stdc++.h>
using namespace std;

int countlen(int a[],int n)
{
	int max_len=0;
	map<int,int>mapres;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		
		sum+=a[i];
		
		if(a[i]==0&&max_len==0)
		max_len=1;
		
		if(sum==0)
		max_len=i+1;
		
		if(mapres.find(sum)!=mapres.end())
		{
			max_len=max(max_len,i-mapres[sum]);
		}
		
		else
		{
			mapres[sum]=i;
		}
	}
	
	return max_len;
}

int main()
{
	int a[]= { 15, -2, 2, -8, 1, 7, 10, 23 }; 
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<countlen(a,n);
	
}
