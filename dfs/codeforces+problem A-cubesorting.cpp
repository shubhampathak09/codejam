// cubes sorting

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	
   // check if it possoble to sort in n*n-1/2 -1 atmost swaps or not
   
   // 5 6  1  3
   // 10 9 8 0
// if its strictly decresiong then no  other wise yes

   bool flagset=1;
   for(int i=0;i<n-1;i++)
   {
   	if(a[i]<=a[i+1])
   	{
   		flagset=0;
   		cout<<"Yes"<<"\n";
   		break;
	   }
	   
   }
   if(flagset==1)
   cout<<"No";
}
