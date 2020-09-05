// abaa 1
// abaaabaa
// 00114011
// abaa
// abaa$abaa
// 001104011
  // 012345678
   
//   for(int i=p.length()+1;i<n;i++)
//   sum+=z[i];


#include<bits/stdc++.h>
using namespace std;


vector<int>z(1000);

void z_function(string s)
{
	int n=s.length();
	for(int i=1;i<n;i++)
	{
		while(i+z[i]<n&&s[z[i]]==s[z[i]+i])
		++z[i];
	}
	
}


int main()
{
		string s="aba";
	    int k=2;
	if(k>1)
	{
		while(k>1)
		{
			s+=s;
			k--;
		}
	}

	string s2=s+"$"+s;
	
	z_function(s2);
	
	int gem=0;	
	for(int i=s.length();i<s2.length();i++)
	gem+=z[i];
	
	cout<<gem;
}
