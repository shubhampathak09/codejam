#include<bits/stdc++.h>
using namespace std;


int sumsection(int s,int e,int folders[])
{
	int sum=0;
	for(int i=s;i<e;i++)
	sum+=folders[i];
	return sum;
}

int getmostwork(int folders[],int workers,int n)
{
	
	int times[workers][n-1];
	
	for(int f=0;f<n;f++)
	times[0][f]=sumsection(0,f+1,folders);
	
	for(int w=1;w<workers;w++)
	{
		for(int f=0;f<n;f++)
		{
			if(w>f)
			times[w][f]=-1;
			
			else
			{
				int mincompletiontime=INT_MAX;
				// try all possible splits
				for(int i=w;i<=f;i++)
				{
					int completiontime=max(times[w-1][f-1],sumsection(i,f+1,folders));
					
					mincompletiontime=min(mincompletiontime,completiontime);
				}
				times[w][f]=mincompletiontime;
			}
			
		}
	}
	return times[workers-1][n-1];
}

int main()
{
	
int a[]={568, 712, 412, 231, 241, 393, 865, 287, 128, 457, 238, 98, 980, 23, 782 };

	int workers=4;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<getmostwork(a,workers,n);
}

// tovist again


