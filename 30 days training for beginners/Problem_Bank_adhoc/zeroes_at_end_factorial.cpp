#include<bits/stdc++.h>
using namespace std;


int fact(int n)
{
	if(n==0)
	return 1;
	
	return n*fact(n-1);
}


int count_zeroes(int x)
{

	int n=fact(x);
	int sum=0;
	
	for(int i=5;i<=x;i*=5)
	{
		sum+=x/i;
	}
	return sum;
}

int main()
{
	
//    	int x;
//	    cin>>x;
	
	
//	cout<<"factorial iof number is.."<<n;
//	int cz=count_zeroes(x);
	
	cout<<endl;
	
//	cout<<"The number of zeroes at end is.."<<cz<<endl;
	
	int k;
	
	cin>>k;
	int answer=0;
	for(int x=0;x<10000;x++)
	{
		if(count_zeroes(x)==k)
		answer++;
	}
	
	cout<<answer;
}
