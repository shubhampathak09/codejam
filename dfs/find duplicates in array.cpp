// find duplicates in arrays o(n) time and o(1) space
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
int a[]= {1, 2, 3, 1, 3, 6, 6};

int n=sizeof(a)/sizeof(a[0]);
 
map<int,int>m;
for(auto x:a)
{
	m[x]++;
 } 
map<int,int>::iterator it;
for(it=m.begin();it!=m.end();it++)
{
	
	if(it->second>1)
	cout<<it->first<<endl;
}

// 1,3,6	
	
}
