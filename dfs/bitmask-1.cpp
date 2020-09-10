#include<bits/stdc++.h>
using namespace std;
/*
char set[]={'a','b','c','d','e'};

int n=sizeof(set)/sizeof(set[0]);

int total=1<<n;

for(int mask=0;mask<total;mask++)
{
	for(int i=0;i<s;i++)
	{
		int f=1<<i;
		if(f&mask!=0)
		cout<<set[i]<" ";
	}
	cout<<endl;
}
*/

int main()
{
	
	char ab[]={'a','b','c','d'};
	int s=sizeof(ab)/sizeof(ab[0]);
	int n=1<<s;
	
	for(int mask=0;mask<n;mask++)
	{
		for(int i=0;i<s;i++)
		{
			int f=1<<i;
			if((f&mask)!=0)
			cout<<ab[i]<<" ";
		}
		cout<<endl;
	}
	
}
