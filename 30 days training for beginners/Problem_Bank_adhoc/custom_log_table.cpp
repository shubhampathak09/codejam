#include<bits/stdc++.h>
using namespace std;



int main()
{
vector<int>v={5,2,4,7,6,3,1,2};
vector<int>log_table(v.size()+1,0);

for(int i=2;i<log_table.size();i++)
{
	log_table[i]=log_table[i/2]+1;
	}	

for(auto x:log_table)
{
	cout<<x<<" ";
	
	
	}
	cout<<endl;
	cout<<log_table[1];
		cout<<log_table[2];
	cout<<log_table[4]<<log_table[3];	
}
