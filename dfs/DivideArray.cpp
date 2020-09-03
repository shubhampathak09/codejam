// Divide Arraqy

#include<bits/stdc++.h>
using namespace std;


int main()
{

long long N;
cin>>N;
long long a[N];
for(long long i=0;i<N;i++)
{
	cin>>a[i];
}
int Q;
cin>>Q;
for(long long i=0;i<Q;i++)
{   long long d;
	cin>>d;
	for(int i=0;i<N;i++)
	{
		a[i]=a[i]/d;
	}
}

for(int i=0;i<N;i++)
{
	cout<<a[i]<<" ";
}

}
