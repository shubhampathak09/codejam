// reverse a linked list in groups of given size

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


struct node*reverse(struct node*head,int k)
{
	
	struct node*curr=head;
	struct node*prev=NULL;
	struct node*temp=NULL;
	int count=0;
	
	while(curr!=null&&count<k)
	{
		temp=curr->next;
		curr->next=prev;
		prev=curr;
		curr=temp;
	}
	
	if(temp!=NULL)
	{
		head->next=reverse(temp,k);
	}
	
	return prev;
}

void printhead(struct node*head)
{
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}

int main()
{
	// test it here ol
	
}
