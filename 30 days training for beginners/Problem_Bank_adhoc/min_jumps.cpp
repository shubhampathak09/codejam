// min jumps
#include<bits/stdc++.h>
using namespace std;

#define INF 1e7+7;

int main()
{
	
	int a[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int min_jumps[n];
	min_jumps[0]=0;
	
	for(int i=1;i<n;i++)
	{
		min_jumps[i]=INF;
	}
    
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(j+a[j]>=i)
			{
				min_jumps[i]=min(min_jumps[i],min_jumps[j]+1);
			}
		}
		}	

      cout<<min_jumps[n-1];
	
}


