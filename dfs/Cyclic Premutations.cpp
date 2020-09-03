#include<bits/stdc++.h>
using namespace std;

vector<long long>z(1000);

// find number of cyclic permutations of s2 such that s1 xor s2 permutation is zero

void z_algorithm(string s1,string s2)
{
     s2=s2+s2;
	s2=s2.substr(0,s2.size()-1);
	string ns=s1+"$"+s2;
    long long count=0;	
	long long n=ns.length();
	
	for(long long i=1;i<n;i++)
	{
		while(i+z[i]<n&&ns[z[i]]==ns[z[i]+i])
		{
		
		++z[i];
}
	}
	
	for(long long i=0;i<n;i++)
	{
	if(z[i]==s1.length())
	count++;
	}
	
	cout<<count;  // remove an extra cyclic permutation consecutove sequcence
}

int main()
{
	
	string s1="111";
	string s2="111";
	
	z_algorithm(s1,s2);
	
}
