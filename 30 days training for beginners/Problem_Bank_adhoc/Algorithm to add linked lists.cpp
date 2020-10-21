// Algorithm to add two linked lists

#include<bits/stdc++.h>
using namespace std;


struct node
{
	// declarations
	int data;
	struct node*next;
	node(int da)
	{
		data=da;
		nex=NULL;
	}
};

struct node*addnodez(struct node*node1,struct node*node2)
{
	
	struct node*res=NULL;
	struct node*prev=NULL;
	struct node*temp;
	int carry=0,sum;
	
	while(node1!=NULL||node2!=NULL)
	{
		sum=carry +(node1 ? node1->data : 0)+ (node2 ? node2->data:0);
		carry=(sum>=10) ? 1: 0;
		sum=sum%10;
		temp=newnode(sum);
		
		if(res==NULL)
		res=temp;
		else
		prev->next=temp;
		
		prev=temp;
		
		if(first)
		first->next;
		if(second)
		second->next;
	}
	
	if(carry>0)
	temp->next=newnode(carry);
	
	return res;
}

int main()
{
	
	
}
