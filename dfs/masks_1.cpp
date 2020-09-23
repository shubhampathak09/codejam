//masks
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[]={'a','b','c','d','e'};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int mask=19;   //10011 = 16 =+ 2 +1=19
//	int y=1<<4; //10000
//	cout<<y;
	  //1 0 0 0 0 =16
//	int x=mask&10000;
//	  cout<<x;
	
	for(int i=0;i<n;i++)
	{
		int y=1<<i;
		if((mask&y)>0)
		{
			cout<<a[i]<<" ";
		}
	}
	
}
