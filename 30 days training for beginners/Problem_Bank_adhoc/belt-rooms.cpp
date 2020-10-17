// Belted Room
/*
4
4
-><-
5
>>>>>
3
<--
2
<>
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		string s;
		cin>>s;
		// '>' clockwise forward
		//'<' backward
		//'-' off
		bool fcycle=true,bcycle=true;
		
		for(int i=0;i<4;i++)
		{
			if(s[i]=='>')
			bcycle=false;
			if(s[i]=='<')
			fcycle=false;
		}
		if(fcycle||bcycle)
		{
			cout<<n<<endl;
			continue;
		}
		for(int i=0;i<n;i++)
		{
			char a=s[i],b=s[(i+1)%n];
			if(a=='-'||b=='-')
			count++;
		}
		cout<<count<<endl;
		
	}
	
	
	
}
