// floor function

#include<bits/stdc++.h>
using namespace std;

int majority_element(int a[],int n)
{

map<int,int>mp;

for(int i=0;i<n;i++)
{
	mp[a[i]]++;
	}	

int f=floor(n/2);

map<int,int>::iterator it;

for(it=mp.begin();it!=mp.end();++it)
{
	if(it->second>f)
	return it->first;
	}	
}

int main()
{
//int a[]={2,2,1,1,1,2,2};

int a[]={3,2,3};

int n=sizeof(a)/sizeof(a[0]);

//cout<<floor(n/2);

cout<<majority_element(a,n);	
}
