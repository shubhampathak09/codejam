// Egyptian text
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
//	string s;
//	cin>>s; // ? a ??a b b ?a? b?b
//	
	string s;
	cin>>s;  
	 
	
	for(int i=0;i<s.length();i++)
	{
		if(i==s.length()-1&&s[i]=='?')
		{
			//cout<<"cdsc";
//			cout<<s[i-1];
//			cout<<endl;
			if(s[i-1]=='a')
			s[i]='b';
			else
			s[i]='a';
		}
		
		else if(s[i]=='?')
		{
			
			if(s[i+1]=='a'||s[i-1]=='a')
			s[i]='b';
			else
			s[i]='a';
		}
		else
		continue;
	}
	
	cout<<s;
	
}
