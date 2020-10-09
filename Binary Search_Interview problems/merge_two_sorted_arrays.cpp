// merge two sorted arrays

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={3,4,5,6,7,11,45,45,100};
	int b[]={1,2,3,4,5,5,5,9};
	
	int n=sizeof(a)/sizeof(a[0]);  //size of a  i
	int m=sizeof(b)/sizeof(b[0]);  // size of b  j
	
	int new1[n+m];
	
	int i=0,j=0,k=0;
	
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			new1[k]=a[i];
			i++;
			k++;
		}
		else
		{
			new1[k]=b[j];
			j++;
			k++;
		}
	}
	
	while(i<n)
	{
		new1[k]=a[i];
		i++;
		k++;
	}
	while(j<n)
	{
		new1[k]=b[j];
		j++;
		k++;
	}
	
	for(int k=0;k<n+m;k++)
	cout<<new1[k]<<" ";	
}
