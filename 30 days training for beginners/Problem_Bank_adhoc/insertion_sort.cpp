
#include<bits/stdc++.h>
using namespace std;

void isort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int key=a[i];
		
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}

int main()
{
	
	int a[]={3,4,1,2,4,5,6,7,9,0,1,2,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	isort(a,n);
	
	for(int i=0;i<n;i++)
	cout<<a[i];
	
}
