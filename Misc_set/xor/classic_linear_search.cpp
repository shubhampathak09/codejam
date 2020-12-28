#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int count=1;
	int mxcon=1;
	for(int i=1;i<=n-1;i++)
	{
		if(a[i]-a[i-1]==0)
		{
			count++;
			mxcon=max(mxcon,count);
		}
		else
		{
			count=1;
		}
	}
//	if(a[n-1]-a[n-2]==0)
	cout<<mxcon;
}
