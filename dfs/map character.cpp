#include<bits/stdc++.h>
using namespace std;

// A  B  C  D  E  F  G H I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
//1  2  3  4  5  6  7 8 9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
int main()
{
	
	map<char,int>m1;
	map<int,char>m2;
	for(int i=1;i<=26;i++)
	{
		m1['A'+i-1]=i;
		m2[i]=('A'+i-1);
			}
	
	cout<<m1['Z'];
	cout<<endl;
	
	char r='X';
	
	cout<<m1[r]; //24
	cout<<endl;
	
	int newmap=(m1[r]+13)%26;
	
	cout<<newmap;  //11
    cout<<endl;
	
		
	cout<<m2[newmap];  //k

  
   
}
