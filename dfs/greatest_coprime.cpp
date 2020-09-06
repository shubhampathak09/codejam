#include<bits/stdc++.h>

using namespace std;

int findgcd(int a,int b)
{
	if(a%b==0)
	return b;
	else
	return findgcd(b,a%b);
}

int findlargestcoprime(int n)
{

for(int i=n-2;i>=1;i--)
{
	if(findgcd(n,i)==1)
	return i;
}
 return 1;
}

int main()
{
	
//	cout<<findgcd(4,2)<<findgcd(14,12)<<findgcd(1,1)<<findgcd(14,13);

cout<<findlargestcoprime(4);

}
