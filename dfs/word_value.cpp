// position begin with i
// word value
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	vector<string> s={"abc","abcabc"};
	
	vector<int>result;
	
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<s[i].length();j++)
		{
			
			 
			sum+=s[i][j]-'a' +1;
			
		}
		result.push_back(sum*(i+1));
	}
	
	for(int i=0;i<result.size();i++)
	cout<<result[i]<<" ";
	
	cout<<"\n";
	
	cout<<result.size();
}
