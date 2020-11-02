// generating all subssets

#include<bits/stdc++.h>

using namespace std;

int main()
{
	

int t;
cin>>t;

char a[]={'A','B','C','D'};

while(t--)
{
	int n;
	cin>>n;
	
	int total=1<<n;
	
	for(int i=0;i<total;i++)
	{
		for(int j=0;j<n;j++)
		{
			int f=1<<j;
			if((i&f)!=0)
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	
	
	 }	 
	
}
