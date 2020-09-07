// Quadruple xor=x

#include<bits/stdc++.h>
using namespace std;

int countxorsum(int a1[],int a2[],int a3[],int a4[],int x,int n)
{
	int count=0;
	
	vector<int>v1;
	vector<int>v2;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			v1.push_back(a1[i]^a2[j]);
			v2.push_back(x^a3[i]^a4[j]);
		}
	}
	
	// binary search
	for(int i=0;i<n;i++)
	
		
		{
			auto lower=lower_bound(v1.begin(),v1.end(),v2[i]);
			auto higher=upper_bound(v1.begin(),v1.end(),v2[i]);
			count+=higher-lower;
		}

     return count;
}

int main()
{
	
	
	int x=0;
	int a[]={1,10};
	int b[]={1,10};
	int c[]={1,10};
	int d[]={1,10};
	int n=2;
	
	cout<<countxorsum(a,b,c,d,x,n);
}
