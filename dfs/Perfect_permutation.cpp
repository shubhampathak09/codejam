// perefect permutation
#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	
	for(int i=1;i<=n;i++)
		{
			a[i]=i;
		}
		
	if(n&1)
	cout<<-1;
	else
	{
		
		
		for(int i=1;i<=n;i+=2)
		{
			swap(a[i],a[i+1]);
		
		}
		
		for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	}
	
}
