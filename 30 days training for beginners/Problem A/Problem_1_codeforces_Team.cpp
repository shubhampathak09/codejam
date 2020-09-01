//https://codeforces.com/blog/entry/82143
#include<bits/stdc++.h>
using namespace std;

// codeforces problem A
// application of unordered multi set

int main()
{
	
	int result=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		multiset<int>s;
		int a,b,c;  // a for petya b for vatsya c for tonya
		cin>>a>>b>>c;
	    s={a,b,c};
		if(s.count(1)>=2)
		result++;
		
	}
	cout<<result;
}
