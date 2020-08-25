// Lexicogrraaphially samallest string

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s="dvdfnvdfmvdfv";
	sort(s.begin(),s.end());
	cout<<s;
	
   unordered_set<char>s1;
   for(int i=0;i<s.length();i++)
   {
   
   s1.insert(s[i]);
   //cout<<s1[i];
}
   map<char,int>count;
   
  for(auto x:s)
  {
  	if(s1.find(x)!=s1.end())
  	count['x']++;
   }
  //  cout<<count['d']; 
}
