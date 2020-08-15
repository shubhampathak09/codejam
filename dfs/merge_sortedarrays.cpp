#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={1,1,4,5,7};
	int b[]={1,2,2,4,9};
	
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	
	int newa[n+m];
	int i=0,j=0,k=0;
	
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			newa[k]=a[i];
			k++;
			i++;
		}
		else
		{
			newa[k]=b[j];
			k++;
			j++;
		}
		
	}
	
	while(i<n)
	{
		newa[k++]=a[i++];
		
	}
	
	while(j<m)
	{
		newa[k++]=b[j++];
	}
	
	
	for(int a=0;a<n+m;a++)
	cout<<newa[a];
}
