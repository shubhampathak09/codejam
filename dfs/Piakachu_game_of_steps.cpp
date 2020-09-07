#include<bits/stdc++.h>
using namespace std;

int abs(int a)
{
	if(a>=0)
	return a;
	else
	return -1*a;
}


int main()
{


map<int,char>m1;
map<char,int>m2;

for(int i=1;i<=26;i++)
{
	m1[i]=('A'+i-1);
	m2['A'+i-1]=i;
	}	
	
int n;
string s,t;
cin>>n;
cin>>s>>t;

//ABCT
//PBDI


// A  B  C  D  E  F  G H I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
//1  2  3  4  5  6  7 8 9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26

// int n=(m2[s[i]]+13)%26;
//   char c=m1[n];   m1[(m2[s[i]]+13)%26)]
// m2 char to int  and m1 int to char
int steps=0;
for(int i=0;i<n;i++)
{
	if(m2[s[i]]+13<=26)
	{
	
	if(abs(m2[s[i]]-m2[t[i]])<abs(m2[s[i]+13]-m2[t[i]]))
	{
		
		steps+=abs(m2[s[i]]-m2[t[i]]);
	
	}
	else
	{
		steps=1+abs(m2[s[i]+13]-t[i]);

	}
	
}
else
{
	
	char x=m1[(m2[s[i]]+13)%26];	
		steps=steps+1+abs(m2[x]-m1[t[i]]);	
	
}
	int n=(m2[s[i]]+13)%26;
	char c=m1[n];
	steps+=min(abs((m2[s[i]]-m2[t[i]])),1+abs(m2[c]-m2[t[i]]));
	
}

	cout<<steps;
}
