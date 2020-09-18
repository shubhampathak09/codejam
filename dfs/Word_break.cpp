#include<bits/stdc++.h>
using namespace std;

bool check(string s1,set<string> s)
{
	
	if(s.find(s1)!=s.end())
	{
		return true;
	}
	return false;
}


bool checkwordbreak(string s1,set<string>s)
{
	
	if(s1=="")
	return true;

	for(int i=1;i<=s1.length();i++)
	{
		//cout<<"here";
	//	cout<<s1.substr(0,i)<<endl;
		if(check(s1.substr(0,i),s)&&checkwordbreak(s1.substr(i,s1.length()),s))
		{
		//	cout<<s1.substr(0,i)<<"\n";
			return true;
		}
		
	}
	
	return false;
}

int main()
{
	
	string s[]={"geek","geeks","gogo"};
	
	set<string>se;
	
	int si=sizeof(s)/sizeof(s[0]);
//	cout<<si;
	
	
	for(int i=0;i<si;i++)
	se.insert(s[i]);
	
//	cout<<check("frog",se);
//	cout<<check("geeks",se);
//cout<<check("geek",se);
//cout<<check("geeks",se);
cout<<checkwordbreak("geekgeek",se);

}
