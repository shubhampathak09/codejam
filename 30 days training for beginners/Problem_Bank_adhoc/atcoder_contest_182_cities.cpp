/*
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
300
 points

Problem Statement
There are 
N
 cities. The time it takes to travel from City 
i
 to City 
j
 is 
T
i
,
j
.

Among those paths that start at City 
1
, visit all other cities exactly once, and then go back to City 
1
, how many paths take the total time of exactly 
K
 to travel along?

Constraints
2
=
N
=
8
If 
i
?
j
, 
1
=
T
i
,
j
=
10
8
.
T
i
,
i
=
0
T
i
,
j
=
T
j
,
i
1
=
K
=
10
9
All values in input are integers.
Input
Input is given from Standard Input in the following format:

N
 
K

T
1
,
1
 
…
 
T
1
,
N

?

T
N
,
1
 
…
 
T
N
,
N

Output
Print the answer as an integer.

Sample Input 1 
Copy
4 330
0 1 10 100
1 0 20 200
10 20 0 300
100 200 300 0
Sample Output 1 
*/






#include<bits/stdc++.h>
using namespace std;

int t[10][10];

void solve()
{
	int n,k;
	cin>>n>>k;
	
	for(int i=1;i<n+1;i++)
    {
    	for(int j=1;j<n+1;j++)
    	{
    		cin>>t[i][j];
		}
		}
	
	// generate all possible combinates 2,3,4..N
	
	vector<int>perm;
	for(int i=2;i<=n;i++)
	perm.push_back(i);
	
	int ans=0;
	
	do
	{
		int curr=1;
		int cost=0;
		for(int x:perm)
		{
			cost+=t[curr][x];
			curr=x;
		}
		cost+=t[perm.back()][1];
		
		if(cost==k)
		{
			ans++;
		}
		} 	
	 	while(next_permutation(perm.begin(),perm.end()));
		
		cout<<ans; 	
}

int main()
{
	solve();
	
}
