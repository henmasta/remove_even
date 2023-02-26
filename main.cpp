#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "MainClass.h"

#define STACK struct STACK


STACK {
	int info;
	STACK *next;
};

void push(STACK **s, int item) {

	STACK *new_item;
    new_item = (STACK*) malloc(sizeof(STACK));
	new_item -> info = item;
    new_item -> next = *s;
	*s = new_item;
}

int pop(STACK **s, int *error) {
	    
    STACK *old_item = *s;
	int old_info = 0;
	*error = 1;
	if (*s) {
        old_info = old_item -> info;
        *s = (*s) -> next;
        free(old_item);
        *error = 0;
	}

    return old_info;
}

int peek(STACK **s, int *error) {

    if (*s) {

		*error = 0;
        return (*s) -> info;

	} else {

		*error = 1;
        return 0;

	}
}

void printt(STACK* head) {
    
	while (head) {
        printf("%d->", head->info);
        head = head->next;
    }

    printf("NULL");
}

STACK *remove_even(STACK *head, int n) {

    while (head && (head->info % n) == 0) {
        STACK *p = head;
        head = head->next;
        delete p;
    }
    if (!head) return NULL;
    

    STACK *p = head;
    while (p->next) {
        if ((p->next->info % n) != 0) p = p->next;
        else {
            STACK *p2 = p->next;
            p->next = p2->next;
            p = p->next;
            delete p2;
        }
    }
    return head;
}

STACK *st = NULL;

int main() {

    CListRemoveEveryN LREN;

    LREN.push(5);
    LREN.push(4);
    LREN.push(3);
    LREN.push(2);
    LREN.push(1);

    //push(&st, 5);
    //push(&st, 4);
    //push(&st, 3);
    //push(&st, 2);
    //push(&st, 1);

    //remove_even(st, 3);
    LREN.print();
    LREN.remove_even(2);
    //print(st);


} 