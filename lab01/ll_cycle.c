#include <stdio.h>
#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node *tortoise = head;
    node *hare = head;
    while (hare->next != NULL && hare->next->next != NULL) {
	    hare = hare->next->next;
	    tortoise = tortoise->next;
  	    if (hare == tortoise) {
	        printf("has cycle");
	        return 1;
    	}
    }
    printf("no cycle");
    return 0;
}
