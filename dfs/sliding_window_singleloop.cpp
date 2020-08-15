// SLIDING WINDOW 
#include<bits/stdc++.h>
using namespace std;

void slidingwindow()
{
	int a[]={2,3,1,5,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	int k=2;
	int l=0;
	int sum=0;
	
	for(int r=0;r<n;r++)
	{
		sum+=a[r];
		if(r-l+1==k)
		{
			cout<<sum<<"\t";
			sum-=a[l];
			l++;
			
		}
	}
	
}

int main()
{
	slidingwindow();
}
