#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node   *new_node,*current,*start;
	int a,n,i;
	
	printf("Enter the size of Linked List: ");
	scanf("%d",&n);
	
	start=NULL;
	for(i=0; i<n; i++)
	{
		printf("Enter the Data: ");
		scanf("%d",&a);
		new_node=malloc(sizeof(struct node));
		new_node->data=a;
		new_node->next=NULL;
	
	
		if(start==NULL)
		{
			start=new_node;
			current=new_node;
		}
		else
		{
			
			current->next=new_node;
			current=new_node;
		}
	}
	//to display last node
		printf("The Linked List is: \n");
		current=start;
		while(current->next!=NULL)
		{
			current=current->next;
		}printf("last node =%d",current->data);
	
		
	return 0;
}
