// median of two sorted arrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int a[]={1,2,3,4,5,6,9,11,15};
	int b[]={45,60,80};
	
	// merge
	
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	
	int result[n+m];
	
	int i=0,j=0,k=0;
	
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			result[k]=a[i];
			k++;
			i++;
		}
		else
		{
			result[k]=b[j];
			k++;
			j++;
		}
	}
	while(i<n)
	{
		result[k]=a[i];
		k++;
		i++;
	}
	while(j<m)
	{
		result[k]=b[j];
		k++;
		j++;
	}
	
	
	// result intialised
	
	for(int p=0;p<n+m;p++)
	{
		cout<<result[p]<<" ";
	}
	
	cout<<endl;
	
	int sz=n+m;
	
	if(sz&1)
	{
		cout<<result[sz/2];
		cout<<endl;
	}
	else
	{
		float sum=(result[sz/2]+result[sz/2-1]);
		cout<<sum/2;
		cout<<endl;
	}
	
	
}
