// reverse words in string  not the entire string

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s="i am good";
	
	vector<string>result;
	
	string str="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			result.push_back(str);
			str="";
		}
		else
		{
			str+=s[i];
		}
	}
	
	result.push_back(str); // last word
	
	//cout<<result.size();
	
	for(int i=result.size()-1;i>=0;i--)
	{
		cout<<result[i]<<" ";
	}
}
