// test call by ref and call by val

#include<bits/stdc++.h>
using namespace std;

void  add(int &a,int &b)
{
	a++;
	b++;
	cout<<a+b;
}

int main()
{
	int a=4;
	int b=5;
	
	add(a,b);
	
	cout<<a<<" "<<b;
	
	// pass be ref alter variables inside the funtion same to the function as well, but pass by value does not do that
	
}
