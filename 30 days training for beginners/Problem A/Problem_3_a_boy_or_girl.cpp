// Problem-3 A boy or Girl

//https://codeforces.com/blog/entry/82143

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	//string s="dcdscdsc";  // d c s
	
	string s;
	cin>>s;
	
	set<char>s1;
	for(int i=0;i<s.length();i++)
	{
		s1.insert(s[i]);
	}
	int siz=s1.size();
//	cout<<siz<<endl;
	if(siz&1)
	cout<<"IGNORE HIM!";
	else
	cout<<"CHAT WITH HER!";
	
	
}
