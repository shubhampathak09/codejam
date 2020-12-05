// each element must have same probability of being choosen

#include<bits/stdc++.h>
using namespace std;


// rand() or srand()
//
int main()
{
	
	int a[]={3,4,1,5,6,7};
	
    srand((time(0)));
    
    //cout<<rand();
   	
   int n=sizeof(a)/sizeof(a[0]);
   
   int x;
   
   while(cin>>x)
   {
   	
   	int x= rand()%n;
   	
   	cout<<a[x]<<endl;
   	
   	
		} 	
	
}



