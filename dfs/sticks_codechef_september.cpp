// Sticks

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		
		int n;
		set<int>s;
		 cin>>n;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(a!=0)
			s.insert(a);
		}
		
		cout<<s.size()<<"\n";
		
	}
	
	
}
