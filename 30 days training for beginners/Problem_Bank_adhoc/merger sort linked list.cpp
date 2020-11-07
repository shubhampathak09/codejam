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


struct node*merge_process(struct node*head1,struct node*head2)
{
	
	struct node*sorted_temp=new node(-1);
	
	struct node*curr=sorted_temp;
	while(head1!=NULL&&head2!=NULL)
	{
		if(head1->data<head2->data)
		{
		
		curr->next=new node(head1->data);
		head1=head1->next;
	}
	else
	{
		curr->next=new node(head2->data);
		head2=head2->next;
	}
	}
	while(head1!=NULL){
		curr->next=new node(head1->data);
		head1=head1->next;
	}
	while(head2!=NULL){
		curr->next=new node(head2->data);
		head2=head2->next;
	}
	
	return sorted_temp->next;
 
 
}


struct node*merger(struct node*list)
{
	
	if(list==NULL||list->next==NULL)
	{
		return list;
	}
	
	struct node*temp=list;
	struct node*slow=list;
	struct node*fast=list;
	
	while(fast!=NULL&&fast->next!=NULL)
	{
		temp=slow;
		slow=slow->next;
		fast=fast->next->next;
	}
	
//	cout<<slow->data;  // either slow or temp will point to mid;
	
	temp->next=NULL;
	
	struct node*left=merger(list);
	struct node*right=merger(slow);
	
	return merge_process(left,right);
}

void print(struct node*list)
{
	while(list!=NULL)
	{
		cout<<list->data<<" ";
		list=list->next;
	}
	
}
int main()
{
	
	struct node*head=new node(1);
	head->next=new node(2);
	head->next->next=new node(4);
//	head->next->next->next=new node(5);
	struct node*temp=merger(head);
	
	print(temp);
	
}
