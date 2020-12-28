
#include<bits/stdc++.h>
using namespace std;


// longest arithmetic sequence

int findmax_ap(int a[],int n)
{
	unordered_map<int,unordered_map<int,int>>mp;
	
	int res=2;
	
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<=i;j++)
		{
			int diff=a[j]-a[i];
			if(mp[j].count(diff))
			{
				mp[j][diff]++;
			}
			else
			mp[j][diff]=2;
			res=max(res,mp[j][diff]);
		}
	
	}
	
	return res;
}

int main()
{
	
	int a[]={3,6,9,12};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<findmax_ap(a,n);
}
