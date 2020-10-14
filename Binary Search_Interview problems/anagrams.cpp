#include<bits/stdc++.h>
using namespace std;


bool checkanagram(string s1,string s2)
{
	
	if(s1.length()==0&&s2.length()==0)
	return true;
	
	if(s1.length()==0||s2.length()==0)
	return false;
	
	int fc[26];
	
	memset(fc,0,sizeof(fc));
	
	for(int i=0;i<s1.length();i++)
	fc[s1[i]-'a']++;
	
	for(int i=0;i<s2.length();i++)
	{
		if(fc[s2[i]-'a']==0)
		return false;
		
		else
		{
			fc[s2[i]-'a']--;
		}
	}
	
	
	for(int i=0;i<26;i++)
	if(fc[i]!=0)
	return false;
	
	return true;
	
}

int main()
{

string s1="mango";
string s2="angom";

cout<<checkanagram(s1,s2);
// well well welll
}
