// Largest 24 hr time from given array

#include<bits/stdc++.h>
using namespace std;

int findmax(multiset<int>s,int n)
{
	int m=0;
    multiset<int>::iterator i;
    for(i=s.begin();i!=s.end();i++)
    m=max(m,*i);
	return m;
}

int main()
{
	
	int a[]={1,2,3,4};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	//char s='a'+1;
	//cout<<s;
	
	multiset<int>s;
	for(int i=0;i<4;i++)
	s.insert(a[i]);
	
	//cout<<s.size();
	
	cout<<findmax(s,n);
	
	int first_num=0,second_num=0;
	
		
}
