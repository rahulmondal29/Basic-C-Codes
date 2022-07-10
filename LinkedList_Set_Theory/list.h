/*
 * list.h
 *
 *  Created on: 24-Jan-2022
 *      Author: RAHUL MONDAL
 */

#ifndef LIST_H_
#define LIST_H_

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*-----Define the Node-----*/
typedef struct node
{
	int data;
	struct node *next;
}Node;

static Node *head1,*head2,*head,*head_union,*head_intersection,*newnode,*tail,*res_union,*res_intersection;

/*-----Define the functions-----*/
Node *insert_node(Node *head_ref,int n);
void display_list(Node *head_ref);
Node *get_union(Node *head_pointer1,Node *head_pointer2);
Node *get_intersection(Node *head_pointer1,Node *head_pointer2);
int compare(Node *head,int data);

#endif /* LIST_H_ */
