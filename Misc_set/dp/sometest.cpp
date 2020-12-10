//some test



#include<bits/stdc++.h>
using namespace std;

struct node
{
	int even_no;
	int odd_no;
	
	node()
	{
		even_no=0;
		odd_no=0;
	}
};



int main()
{


//int a[]={1,2,1,2};



//int n=sizeof(a)/sizeof(a[0]);

int n;
cin>>n;

vector<int>temp(n);
while(n--)
{
    int val;
    cin>>val;
    temp.push_back(val);
}


vector<node>prefix(n+1);

//struct node*base=new node();




prefix[0].even_no=0;
prefix[0].odd_no=0;
	
int cc=0;

for(int i=0;i<n;i++)
{
	
	if(temp[i]&1)
	{
		//struct node*nn=new node();
		prefix[i+1].odd_no=1+prefix[i].odd_no;
		//prefix.push_back(nn);
		prefix[i+1].even_no=prefix[i].even_no;
	}
	else
	{
		prefix[i+1].even_no=1+prefix[i].even_no;
		prefix[i+1].odd_no=prefix[i].odd_no;
	}
}

//cout<<prefix[3].odd_no;
//cout<<prefix[3].even_no;

// generate all subarrays

//int idenx=2;
//int jdenx=3;
 
//1 2 3 


for(int i=0;i<n-1;i++)
{
	for(int j=i+1;j<n;j++)
	{
    
bool ans=(prefix[j+1].odd_no-prefix[i+1-1].odd_no)==(prefix[j+1].even_no-prefix[i+1-1].even_no);
if(ans==true)
{   
//cout<<1;
	cc++;
}
			
	}
}

cout<<cc;

}
