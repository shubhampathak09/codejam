// check fibonacci
#include<bits/stdc++.h>
using namespace std;


bool checkperfectsq(int n)
{
	
	double s=sqrt(n);
	
	return s-floor(s)==0;
	
}

bool checkfibonacci(int n)
{
	return checkperfectsq(5*n*n-4)||checkperfectsq(5*n*n+4);
}

int main()
{
	
	cout<<checkperfectsq(16);
	cout<<checkfibonacci(4);
	cout<<checkfibonacci(11);
	cout<<checkfibonacci(13);
}

