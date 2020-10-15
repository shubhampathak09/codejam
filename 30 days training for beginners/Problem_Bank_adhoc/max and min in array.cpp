// max and min element in array
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={1,2,3,5,6,9,0};
	
	int mx=a[0];
	int mn=a[0];
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=1;i<n;i++)
	{
		if(a[i]>mx)
		{
		 mx=a[i];
		}
		else if(a[i]<mn)
		{
			mn=a[i];
		}
	}
	
	cout<<mx<<" "<<mn;
}
