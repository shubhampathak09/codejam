#include<bits/stdc++.h>
using namespace std;





int main()
{
	
int N,Q;
cin>>N>>Q;

vector<int>v1(N+1);
vector<int>v2(N+1);

for(int i=1;i<=N;i++)
cin>>v1[i];

for(int i=1;i<=N;i++)
cin>>v2[i];

while(Q--)
{
	int a,l,b;
	
 cin>>a>>l>>b;
 if(a==1)
 {
 	int sum=0;
 	for(int i=l;i<=b;i++)
 	{
 		sum+=v1[l]+v2[l+1];
 		cout<<sum<<"\t";
 		
	 }
	 cout<<endl;
 	cout<<sum;
 }
 else
 {
 	int sum=0;
 	for(int i=l;i<=b;i++)
 	{
 		sum+=v2[l]+v1[l+1];
 		cout<<sum<<"\t";
	 }
	 cout<<endl;
	 cout<<sum;
 }
 
}
 	
	
}
