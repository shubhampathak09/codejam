#include<bits/stdc++.h>
using namespace std;

// prefix sum

int main()
{
	
	int a[]={5,3,2,1,4,7,6};
	int n=sizeof(a)/sizeof(a[0]);
	
	int prefix[n];
	
	prefix[0]=5;
	
	for(int i=1;i<n;i++)
	{
		prefix[i]=prefix[i-1]+a[i];
		}
	
	// printing sum of all elements of k subarrays
	//k
	
	int k=2;
	cout<<prefix[k-1];
	cout<<endl;
	for(int i=k-1;i<n-1;i++)
	{
		
		cout<<prefix[i+k-1]-prefix[i-1]<<endl;
	}
	
}
