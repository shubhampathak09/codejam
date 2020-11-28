//
#include<bits/stdc++.h>
using namespace std;

//building a sparse table




int main()
{
vector<int>v={7,2,3,0,5,10,3,12,18};
vector<int>log_table(v.size()+1,0);

for(int i=2;i<log_table.size();i++)
{
	log_table[i]=log_table[i/2]+1;
	}	


vector<vector<int>>sparse_table(log_table.back()+1,vector<int>(v.size()));

sparse_table[0]=v; //this is length 1

for(int row=1;row<sparse_table.size();row++) //length 2 onwards

{
	for(int i=0;i+(1<<row)<=v.size();i++)
	{
		sparse_table[row][i]=min(sparse_table[row-1][i],sparse_table[row-1][i+(1<<(row-1))]); //2 3 4 5
		// half of lenght of array +i ->suffix
	}
}
	
	while(1)
	{
		
		int l,r;
		cin>>l>>r;
		
		int log=log_table[r-l];
		
	//	int mr=r-(1<<(log));
		
		int minimum=min(sparse_table[log][l],sparse_table[log][r-(1<<log)]);  //prefix is shifted by i + half of length of array
		
		
		cout<<minimum<<endl;

	}
	
}
