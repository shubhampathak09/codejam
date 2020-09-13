// codechef August 
// mode of frequencies

#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;

cin>>t;

while(t--)
{
		
	int n;
//	vector<int>a;
    map<int,int>mp;

	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	int a;
	cin>>a;
	mp[a]++;
}
	
	map<int,int>fmap; //frequency map
	
   for(auto i:mp)
   {
   	fmap[i.second]++;
   }
   
   int maxi=0;
   for(auto i:fmap)
   {
   	maxi=max(maxi,i.second);
   }
   
   int minv=INT_MAX;
   for(auto i:fmap)
   {
   	if(i.second==maxi)
   	{
   		minv=min(minv,i.first);
	   }
   }
   
   cout<<minv<<"\n";
}
}
