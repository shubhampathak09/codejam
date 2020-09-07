// sum of xor of all subarrays of lengrth k
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int a[]={1,2,3,4};
	int k=2;
	int n=sizeof(a)/sizeof(a[0]);
	int sum=0;
	for(int i=0;i<=n-k;i++)
	{
		sum+=a[i]^a[i+1];
	}
	
	cout<<sum;
	
}
