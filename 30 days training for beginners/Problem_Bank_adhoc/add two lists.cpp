
#include<bits/stdc++.h>
using namespace std;

// add two numbers in linked list
struct node
{
	int data;
	node*next;
	
	node()
	{
		data=0;
		next=NULL;
	}
	node(int x)
	{
		data=x;
		next=NULL;
	}
};

int main()
{
	
	struct node*list1=new node(2);
	
	list1->next=new node(1);
	
	list1->next->next=new node(3);
	
	struct node*list2=new node(5);
	
	list2->next=new node(6);
	
	list2->next->next=new node(4);
	
	
   struct node*list3=new node();
	
	/*while(list1!=NULL)
	{
		cout<<list1->data;
		list1=list1->next;
	}
*/

int carry=0;
struct node*temp=list3;
   int result;
   while(list1!=NULL||list2!=NULL||carry)
   {
      	
   	result=(list1->data+list2->data+carry);
   // cout<<result<<" ";	
   	int first_val=result%10+carry;
   	int carry=result/10;
   	
   	list3=new node(first_val);
   	if(temp->data==0)
   	{
   		temp=list3;
	   }
   //	cout<<list3->data<<" ";
   	list3=list3->next;
   	list1=list1->next;
   	list2=list2->next;
	   }
	   
	   //list3=temp;
	   
	   while(temp!=NULL)
	   {
	   	cout<<temp->data;
	   	temp=temp->next;
		   }	
}


