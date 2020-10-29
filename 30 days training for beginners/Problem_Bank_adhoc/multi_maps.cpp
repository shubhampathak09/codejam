
#include<bits/stdc++.h>
using namespace std;
// sorting some pairs

bool comp(pair<int,int>a,pair<int,int>b)
{
	if(a.second!=b.second)
	return a.second>b.second;
	else
	return a.second<b.second;
}

int main()
{
 
 vector<pair<int,int>> vp={{1,2},{0,1},{0,0},{1,5},{3,5}};
 
 sort(vp.begin(),vp.end(),comp);
 
 
 for(auto x:vp)
 {
 	cout<<x.first<<"  "<<x.second;
 	cout<<endl;
 }
 
 
}
