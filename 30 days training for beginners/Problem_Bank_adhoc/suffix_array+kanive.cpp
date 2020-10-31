#include<bits/stdc++.h>
using namespace std;


// build suffic array

vector<string>input(string s)
{
	
	// abaab
	int n=s.length();
	vector<string>result;
	for(int i=0;i<n;i++)
	{
		    
		result.push_back(s.substr(i,n-i));
	}
	return result;
}

int main()
{
	
	vector<string>res=input("abaab");
	
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<"\n";
	}
	
	cout<<"after Sorting"<<endl;
	
	sort(res.begin(),res.end());
	
		for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<"\n";
	}
}
