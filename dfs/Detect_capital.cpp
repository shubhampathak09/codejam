// check if all letters of word are valid or not
#include<bits/stdc++.h>
using namespace std;
bool detectCap()
{
	
	string s;
	cin>>s;
	
	bool allsmall=true;
	bool allcap=true;
	bool excepfirst=true;
	
	if(islower(s[0]))
	excepfirst=false;
	
	for(int i=0;i<s.length();i++)
	{
		
		if(islower(s[i]))
		allcap=false;
		
		if(isupper(s[i]))
		allsmall=false;
		
		if(isupper(s[i])&&i!=0)
		excepfirst=false;
	}
	
	if(allsmall||allcap||excepfirst)
	return true;
	
	
	return false;
}

int main()
{
	
	cout<<detectCap();
	
	
}
