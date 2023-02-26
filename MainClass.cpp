#include <string.h>
#include <stdio.h>
#include <iostream>
#include "MainClass.h"
#define STACK struct STACK

using namespace std;

STACK {
        int info;
        STACK *next;
};

CListRemoveEveryN::CListRemoveEveryN() {
    head = NULL;
}


void CListRemoveEveryN::ReleaseList() {
    if (head!=NULL) {
        STACK *p;
        while (head!=NULL) {
            p = head;
            head = head->next;
            delete p;
        }
        head = NULL;
    }
}

void CListRemoveEveryN::print() {
    
	while (head) {
        cout << head->info << "->";
        head = head->next;
    }

    printf("NULL");
}

void CListRemoveEveryN::push(int s) {

    STACK *newItem;
    newItem = new STACK;

	newItem -> info = s;
    newItem -> next = head;
	head = newItem;
}

STACK CListRemoveEveryN::*remove_even(int n) {
    
    return head;
}

CListRemoveEveryN::~CListRemoveEveryN(){}
