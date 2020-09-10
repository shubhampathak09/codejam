#include<bits/stdc++.h>
using namespace std;

// even arrays 0 0 0 1 1 1 0 1

void solve()
{
	int n;
	cin>>n;
	vector<int>a(n);
	
	for(int i=0;i<n;i++)
	{
		
		cin>>a[i];
		
	}

vector<int>b;
for(int i=0;i<n;i+=4)
{
	if(i+4<=n)
	{
		if(a[i]+a[i+1]+a[i+2]+a[i+3]>=2)
		{
			b.push_back(1);
			b.push_back(1);
					}
	   else
	   {
	   	b.push_back(0);
	   	b.push_back(0);
	   }
	   
	}
	
	if(a[i]+a[i+1]==2)
	{
		b.push_back(1);
		b.push_back(1);
	}
	else
	b.push_back(0);
}
	
	cout<<b.size();
	
	for(int i=0;i<(int)b.size();i++)
	cout<<b[i]<<" ";
	
}
int main()
{
	solve();
	
}
