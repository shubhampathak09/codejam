//
#include<bits/stdc++.h>
using namespace std;


void streak_number(string s)
{
	
	int n=s.length();
		
	int start_2=n;
	int last_1=-1;
	
	for(int i=0;i<n;i++)
	{
		
		if(s[i]-'0'==2)
		{
			start_2=min(start_2,i);
		}
		if(s[i]-'0'==1)
		{
			last_1=max(i,last_1);
		}                                           //  311111123456124456222222
	}
	
	if(last_1>start_2)
	{
		cout<<"Streak has ended";
	}
	else
	{
		cout<<"Streak lives in heart";
	}
}

int main()
{
	int t;
	
	cin>>t;
	
	
	while(t--)
	{
		string s1;
		
		cin>>s1;
		
		streak_number(s1);
		
		cout<<endl;
		
	}
}

// classic linear search algorithm
