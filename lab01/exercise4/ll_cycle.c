#include <stddef.h>
#include "ll_cycle.h"

/* 	return 1 if linked list has circle
	return 0 if don't
*/

int ll_has_cycle(node *head) {
    node *fastPtr = head;
    node *slowPtr = head;
    while(fastPtr != NULL && fastPtr->next != NULL){
    fastPtr = fastPtr->next->next;
    slowPtr = slowPtr->next;
    if(fastPtr == slowPtr){
    	return 1;
    	}
    }
    return 0;
}
