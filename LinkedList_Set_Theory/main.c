/*
 * main.c
 *
 *  Created on: 24-Jan-2022
 *      Author: RAHUL MONDAL
 */
#include "list.h"
//#define DEBUG_MAIN

int main()
{
	int first_list_nodes = 0,second_list_nodes = 0,first_list_items = 0,
			second_list_items = 0;
	printf("Enter the number of Nodes in first List:");
	fflush(stdout);
	scanf("%d",&first_list_nodes);
	printf("Enter %d the elements:",first_list_nodes);
	for(int i = 0;i < first_list_nodes;i++)
	{
		fflush(stdout);
		scanf("%d",&first_list_items);
		head1 = insert_node(head1,first_list_items);
	}
	display_list(head1);
	printf("\nEnter the number of Nodes in second List:");
	fflush(stdout);
	scanf("%d",&second_list_nodes);
	printf("Enter %d the elements:",second_list_nodes);
	for(int i = 0;i < second_list_nodes;i++)
	{
		fflush(stdout);
		scanf("%d",&second_list_items);
		head2 = insert_node(head2,second_list_items);
	}
	display_list(head2);
	res_union = get_union(head1,head2);
#ifdef DEBUG_MAIN
	printf("\nValue of Head1 and Head2 :%d %d",head1,head2);
#endif
#ifdef DEBUG_MAIN
	printf("\nValue of Head1 and Head2 after performing union :%d %d\n",head1,head2);
	printf("Value of res_union :%d\n",res_union);
#endif
	printf("Here is the result of union: ");
	display_list(res_union);
	res_intersection = get_intersection(head1,head2);
#ifdef DEBUG_MAIN
	printf("\nValue of Head1 and Head2 after performing union :%d %d\n",head1,head2);
	printf("Value of res_intersection :%d\n",res_intersection);
#endif
	printf("Here is the result of intersection: ");
	display_list(res_intersection);
}
