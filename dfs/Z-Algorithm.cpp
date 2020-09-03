//Z-Algorithm trivial implementation
// easy peasy
#include<bits/stdc++.h>
using namespace std;

vector<int>z(1000,0);

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
	
	
	string text="abababa";
	string pattern="ab";
	
	string newtext=pattern + "$" +text;

   	
	z_function(newtext);
	
	for(int i=0;i<newtext.length();i++)
	cout<<z[i]<<" ";
    
    cout<<"\n";
    
    cout<<"Pattern occurs at folowing indexex in orginal text..";
	for(int i=0;i<newtext.length();i++)
	{
		if(z[i]==pattern.length())
		cout<<i-pattern.length()-1<<" ";
		}	
	
}
