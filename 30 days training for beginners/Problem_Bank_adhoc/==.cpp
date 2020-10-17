#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
//	cout<<bitset<8>(a)<<endl;
//	cout<<bitset<8>(b);
    int xorcheck=a^b;	
	
	if(!xorcheck)
	cout<<"same";
	else
	cout<<"not same";
	
}
