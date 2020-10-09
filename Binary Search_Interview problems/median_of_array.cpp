// median of arrays

#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int a[]={1,2,3,4,5,6};
	
//	int a1[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
//	cout<<n;
	if(n&1)
	{
		
		cout<<"Median is middle element:- "<<a[n/2];
		
	}
	else
	{
		float res=a[n/2]+a[n/2-1];
	//	cout<<res;
		cout<<"Median is "<<res/2;
	}
	
}
