/*
 * list_m.c
 *
 *  Created on: 01-Feb-2022
 *      Author: RAHUL MONDAL
 */

/*
 * list.c
 *
 *  Created on: 24-Jan-2022
 *      Author: RAHUL MONDAL
 */

#include "list.h"
//#include "set.h"
//#define DEBUG
/*void create_node(Node **head_ref)
{
	printf("Creating a Node...\n");
	int n;
	printf("How many nodes you want to create :");
	fflush(stdout);
	scanf("%d",&n);
	for(int i = 0;i < n;i++ )
	{
		newnode =(Node*) malloc(sizeof(Node));
#ifdef DEBUG
		printf("Address of created newnode :%d\n",newnode);
#endif
		printf("Enter the Data:");
		fflush(stdout);
		scanf("%d",&newnode->data);
		if(*head_ref == NULL)
			{
				*head_ref = newnode;
				tail = *head_ref;
				tail->next = 0;
				printf("Value of Current Node data = %d and current Node next = %d\n",tail->data,tail->next);
			}
		else
			{
				tail->next = newnode;
				printf("Value of Previous Node next = %d\n",tail->next);
				tail = newnode;
				printf("Value of Current Node data :%d\n",tail->data);
			}
	}
	tail->next = 0;
#ifdef DEBUG
	printf("Value of Head: %d\n",*head_ref);
	printf("Value of Newnode: %d\n",newnode);
	printf("Value of Tail: %d\n",tail);
	printf("Value of Next address at last node: %d\n",tail->next);
#endif
}
*/

void display_list(Node *head_ref)
{
#ifdef DEBUG
		printf("Entering Display function\n");
#endif
	    if(head_ref == 0)
	    {
	        printf(" List is empty.");
	    }
	    else
	    {
	        tail = head_ref;
	        while(tail != 0)
	        {
	            printf("%d ", tail->data);// prints the data of current node
	            tail = tail->next;// advances the position of current node
	        }
	        tail = newnode;
	    }
#ifdef DEBUG
	            printf("Value of tail is :%d\n",tail);
#endif
}

Node *insert_node(Node *head_ref,int n)
{
		printf("\nInserting Elements at the beginning...\n");
		newnode =(Node*) malloc(sizeof(Node));
		printf("Address of created newnode :%d\n",newnode);
		newnode->data = n;
		printf("Inserted value is :%d\n",newnode->data);
		newnode->next = head_ref;
		head_ref = newnode;
#ifdef DEBUG
		printf("Head Address: %d\n",head_ref);
		printf("Newnode Address: %d\n",newnode);
		printf("Exiting insert function\n");
#endif
		return head_ref;
}

Node *get_union(Node *head_pointer1,Node *head_pointer2)
{
	while(head_pointer1 != 0)
	{
			head_union = insert_node(head_union,head_pointer1->data);
			head_pointer1 = head_pointer1->next;

	}
	while(head_pointer2 != 0)
	{
		if(!compare(head_union,head_pointer2->data))
			head_union = insert_node(head_union,head_pointer2->data);
		head_pointer2 = head_pointer2->next;
	}
	return head_union;
}

int compare(Node *head,int data)
{
    while (head != NULL)
    {
        if (head->data == data)
            return 1;
        head = head->next;
    }
    return 0;
}


Node *get_intersection(Node *head_pointer1,Node *head_pointer2)
{
    while (head_pointer1 != 0)
    {
        if (compare(head_pointer2, head_pointer1->data))
        	head_intersection = insert_node(head_intersection,head_pointer1->data);
        head_pointer1 = head_pointer1->next;
    }

    return head_intersection;
}

