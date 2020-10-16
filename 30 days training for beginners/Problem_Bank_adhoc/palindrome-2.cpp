#include<bits/stdc++.h>
using namespace std;

int main()
{
	string ss="ddd";

	//dvvffgsgffvvd
	
	//cout<<'d'-'a';

int cnt[26];

memset(cnt,0,sizeof(cnt));
	
 for(int i=0;i<ss.length();i++)
 {
 	cnt[ss[i]-'a']++;
 }
	 
	int count_odd=0; 
 for(auto x: cnt)
 {
 	if(x&1)
 	count_odd++;
 }
	

if(count_odd>1)
cout<<"Not possible";
else
cout<<"Possible";
	 
	 
	 
	 
	 
}
