#include<bits/stdc++.h>
using namespace std;

// reverse k nodes

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

void printnode(struct node*head)
{
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}


struct node* reverseKnodes(struct node*head,int k)
{
	
	struct node*curr=head;
	struct node*temp=NULL;
	struct node*prev=NULL;
	
	int count =0;
	
	while(curr!=NULL&&count<k)
	{
	
	temp=curr->next;
	curr->next=prev;
	prev=curr;
	curr=temp;
	count++;
		
	}
	
	if(temp!=NULL)
	head->next=reverseKnodes(temp,k);
	
	
	return prev;
}

int main()
{
// 1->2->3->4->5
struct node*head=new node(1);
head->next=new node(2);
head->next->next=new node(3);
head->next->next->next=new node(4);
head->next->next->next->next=new node(5);	


printnode(head);

	
struct node*head1=reverseKnodes(head,2);



cout<<endl;

printnode(head1);

 //cout<<head->next->next->data;
	
}


