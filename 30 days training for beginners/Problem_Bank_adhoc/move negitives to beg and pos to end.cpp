#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={-1,2,-3,4,-6,-7,3,4,9,0,-1};
	
   int n=sizeof(a)/sizeof(a[0]);

   int  j=0; 

   for(int i=0;i<n;i++)
{
	
	if(a[i]<0)
	{
		swap(a[j],a[i]);
		{
			j++;
		}
	}
}

for(int k=0;k<n;k++)
	cout<<a[k]<<"\n";
	
}
