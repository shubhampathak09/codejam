// linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*next;
	
	node(int val)
	{
		data=val;
		next=NULL;
	}
};

void del(int val,struct node*&head)
{
 
 struct node*prev,*temp=head;
// temp=head;
 
 if(temp!=NULL&&temp->data==val)
 {
 	// head node itself
 
 	head=temp->next;
 
 	head->next=NULL;
 //	free(temp);
 	return;
 }
 
 while(temp!=NULL&&temp->data!=val)
 {
 	
 	prev=temp;
 	temp=temp->next;
 }
 if(temp==NULL)
 return;
 
 prev->next=temp->next;
// free(temp);
 
}

void print(struct node*head)
{
		while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

int main()
{
	
	
	struct node*head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	
    print(head);
	
	del(2,head);
	
	print(head);
	
	del(1,head);
	
	print(head);
}
