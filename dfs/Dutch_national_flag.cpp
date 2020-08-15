// Dutch national falg algorithm

#include<bits/stdc++.h>
using namespace std;

swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	
}

int main()
{
	
	
	int a[]={2,0,2,0,1,1,0,0,1,1,2,0,1,2,2,0,0,2};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int low=0,mid=0,high=n-1;
	
	while(mid<=high)
	{
		
		switch(a[mid])
		{
			
			case 0:
				swap(&a[low],&a[mid]);
				low++;
				mid++;
				break;
			case 1:
				 mid++;
				 break;
			case 2:
			     swap(&a[mid],&a[high]);
				 high--;
				// mid++;
				 break;	 
		}
		
	}
	
	for(int i=0;i<n;i++)
	cout<<a[i];
}
