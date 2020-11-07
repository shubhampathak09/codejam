#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*next;
	
	node(int data)
	{
		this->data=data;
		next=NULL;
	    
	}
};


struct node*add(struct node*first,struct node*second)
{
	struct node*temp,*res=NULL,*prev=NULL;
	
	int sum=0;
	int carry=0;
	
	while(first!=NULL&&second!=NULL) 
	{
		
		sum= (first? first->data:0) + (second ? second->data:0)+carry;
//		
//		carry=(sum>=10 ? 1 : 0);
//		
//		sum=sum %10;
//	
//	    cout<<sum<<" ";
	   
//	     sum = carry + (first ? first->data : 0) 
 //             + (second ? second->data : 0); 
  
        // update carry for next calulation 
        carry = (sum >= 10) ? 1 : 0; 
  
        // update sum if it is greater than 10 
        sum = sum % 10; 
		
			
		temp=new node(sum);
		
		if(res==NULL)
		{
			res=temp;
		}
		else
		{
			prev->next=temp;
		}
		prev=temp;
		
		if(first)
		{
			first=first->next;
		}
		if(second)
		{
			second=second->next;
		}
	}
    	
	if(carry>0)
	{
		temp=new node(carry);
		
		prev->next=temp;
		
		prev=temp;
	}
	
	return res;
}

void printlist(struct node*head)
{
	
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	
}

int main()
{
	
	struct node*first=new node(1);
	first->next=new node(2);
//	first->next->next=new node(3);
	
	
	struct node*second=new node(2);
	second->next=new node(4);
//	second->next->next=new node(9);
	
	
	struct node*sum=add(first,second);
	
	printlist(sum);
	
}
