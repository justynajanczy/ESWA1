#pragma once

#include "LinkedList.h"
#include <stdio.h>

int main()
{
	linkedlist_t myList = linked_list_create();
	linked_list_add_item(myList, 1);
	linked_list_add_item(myList, 2);
	linked_list_add_item(myList, 3);
	//printf("Length: %d\n", linked_list_no_of_items("%d\n", myList));


	linked_list_print_elements(myList);
	printf("pull method result: %d\n", linked_list_pull_item(myList));
	linked_list_print_elements(myList);

	//printf("%s\n", linked_list_remove_item(myList, 2));
	//linked_list_print_elements(myList);

}