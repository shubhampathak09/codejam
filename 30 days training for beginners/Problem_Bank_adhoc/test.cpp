
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={2,1,4,5,2,3,7,8,9,0};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=1;i<n;i++)
	{
		
		int j=i-1;
		int key=a[i];
		
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	
	for(auto x:a)
	{
		cout<<x<<' ';
	}
}
