#include<bits/stdc++.h>
using namespace std;

int main()
{
	

int t;
cin>>t;
while(t--)
{
	string s;
	cin>>s;
	int n=s.length();
	
	bool flag=true;
	
	if(n!=10)
	{
		flag=false;
		cout<<"No"<<endl;
	}
	else
	{
		for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			if(s[i]=='0')
			{
				flag=false;
				cout<<"No"<<endl;
				break;
			}
		}
		
		if(s[i]-'0'>=0&&s[i]-'0'<=9)
		{
			continue;
		}
		else
		{
			flag=false;
			cout<<"No"<<endl;
			break;
		}
	}
}
	if(flag)
	{
		cout<<"Yes"<<endl;
	}
	
}
	
	
}
