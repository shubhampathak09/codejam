// A B C D E F G H I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
// 1 2 3 4 5 6 7 8 9 10 11  12 13 14 15 16 17 18 19 20 21 22 23 24 25 26  20+13=33%26=7 20+13,if >26 -25
// abct   pbdi   3+1+2

//ans+=min(abs((c1+13)%26 - char c2),abs(char c1-char c2)) 2+1

#include<bits/stdc++.h>
using namespace std;
//
//int main()
//{
//	
//	string s1="ABCT";
//	string s2="PBDI"
//	
//	map<char,int>m;
//	for(int i=0;i<25;i++)
//	m['A'+i]=i=1;
//	
//	for(int i=0;i<s1.length;i++)
//	{
//		char x=s1[i],y=s2[i];
//		if(abs(m[x]-m[y])>abs(m[x]+13-m[y]))
//		{
//			
//		}
//		
//	 } 
//	
//}

/*
3

I hope this below information will give an idea about how chain '==' operator works:

Since C language does not support chaining comparison like a==b==c; each equal to operator (==) operates

 on two operands only. Then how expression a==b==c evaluates?

According to operators associativity equal to operator (==) operates from left to right, 

that means associativity of equal operator (==) is left to right.

Expression a==b==c is actually (a==b) ==c, see how expression (a==b) ==c evaluates?

•(a==b) will be compared first and return either 1 (true) or 0 (false).

•Then value of variable c will be compared with the result of (a==b).

So we won't use chain '==' operator for multiple variable comparison.







*/





int main()
{
	
	int a=6;
	int b=3,c=6 ;
	if(a==b==c)
	cout<<"Yes";
	else
	cout<<"No";
}
