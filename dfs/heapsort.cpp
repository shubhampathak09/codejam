// heapsort
#include<bits/stdc++.h>
using namespace std;

void heapify(int a[],int n,int i)
{
	
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	
	if(a[left]>a[largest]&&left<n)
	largest=left;
	
	if(a[right]>a[largest]&&right<n)
	largest=right;
	
	if(largest!=i)
	{
	
	swap(a[largest],a[i]);
	heapify(a,n,largest);
}
}

void heapsort(int a[],int n)
{
	
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(a,n,i);
	}
		for(int i=n-1;i>=0;i--)
		{
			swap(a[i],a[0]);
			heapify(a,i,0);
			
		}
		
	}
	


int main()
{

int a[]={3,5,6,1,0,9,5,4,3,2,1,8};

int n=sizeof(a)/sizeof(a[0]);

heapsort(a,n);	

for(int i=0;i<n;i++)
cout<<a[i]<<" ";
	
}
	

