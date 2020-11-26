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

void printnode(struct node*head);

void reverse_node(struct node*head)
{
//	1 -> 2->3->4
	struct node*curr=head;
	struct node*prev=NULL;
	struct node*temp=NULL;
	
	while(curr!=NULL)
	{
	temp=curr->next;
	curr->next=prev;
	prev=curr;
	curr=temp;	
		
	}
	head=prev;
	
	
	printnode(prev);
	
}

void printnode(struct node*head)
{
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}

int main()
{
	struct node*head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	
	
	printnode(head);
	cout<<endl;
	
	reverse_node(head);
	
	
}

 
