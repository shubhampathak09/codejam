// print all distinct substrings of a string 

#include<bits/stdc++.h>
using namespace std;

vector<int>z(1000);



void z_function(string s)
{
	
	int m=s.length();
//	cout<<m;
	for(int i=1;i<m;i++)
	{
		while(i+z[i]<m&&s[z[i]]==s[z[i]+i])
		++z[i];
	}
	
}

int main()
{
	
	string s="sdcdscdscsd";
	z_function(s);
	// distinct substrings same as prefix and suffix
    

	for(int i=0;i<s.length();i++)
	cout<<z[i]<<" ";
	cout<<"\n";
	set<string>se;
	
	for(int i=0;i<s.length();i++)
	{
		if(z[i]>=1)
		se.insert(s.substr(i,i+z[i]));
	}
	
	for(auto x:se)
	cout<<x<<endl;
}
