#include<iostream>
using namespace std;
struct SingleLinkedList
{
	int data;
	struct SingleLinkedList *next;
};
struct SingleLinkedList *head=NULL;
void insert(int data)
{
	struct SingleLinkedList* newnode=(struct SingleLinkedList*) malloc((sizeof(struct SingleLinkedList)));
	newnode->data=data;
	newnode->next=NULL;
	if (head==NULL)
	{
		head=newnode;
		//cout<<"HI";
		return;
	}
	struct SingleLinkedList* temp;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	return;
}
void display(SingleLinkedList* head)
{
	if(head==NULL)
	{
		cout<<"List Is Empty";
	}
	else
	{
	struct SingleLinkedList *temp=head;	
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	}
	return;
}
void SplitList(SingleLinkedList* head)
{
	SingleLinkedList* p=head;
	SingleLinkedList* q=head;
	SingleLinkedList* SecondListHead;
	while(1)
	{
		p=p->next->next;
		if(p==NULL)
		{
	        SecondListHead=q->next;
		   q->next=NULL;
		   break;	
		}
		if(p->next==NULL)
		{
			q=q->next;
			SecondListHead=q->next;
		    q->next=NULL;
		    break;
		}
		q=q->next;
	}	
	q->next=NULL;
	display(head);
	cout<<"\n";
	display(SecondListHead);
	return;
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	SplitList(head);
	return 0;
}
