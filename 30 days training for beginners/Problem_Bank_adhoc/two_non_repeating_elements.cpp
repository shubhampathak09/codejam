/*Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct.
 Find the other two numbers  (in ascending order). */
 
 // map based solution
 
#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int a[]={3,3,4,5,1,2,2,1};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	map<int,int>mp;
	
	for(auto x:a)
	{
		mp[x]++;
	}
	
 //cout<<mp[1];
 
 map<int,int>::iterator it;
 vector<int>v;
 
 
 for(it=mp.begin();it!=mp.end();++it)
 {
 	if(it->second==1)
 	{
    v.push_back(it->first);	 
 //	cout<<it->first<<endl;
 }
 }
 
 for(auto x:v)
 {
 	cout<<x<<" ";
 }
}
