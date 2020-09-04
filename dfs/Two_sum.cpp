#include<bits/stdc++.h>
using namespace std;

// // two sum problem

void twosum(int a[],int target)
{
	int n=sizeof(a)/sizeof(a[0]);
	
	map<int,int>m;
	vector<int>result;
	for(int i=0;i<n;i++)
	{
		m[a[i]]=i;
	}
	
	for(int i=0;i<n;i++)
	{
		if(m.find(target-a[i])!=m.end())
		{
			result.push_back(i);
			result.push_back(m[target-a[i]]);
			break;
		}
	}
	
	for(int i=0;i<result.size();i++)
	cout<<result[i]<<" ";
}
int main()
{
	
	
int a[]={2,7,11,15};

twosum(a,9);	
	
	
}
