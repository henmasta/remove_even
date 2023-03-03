#include <string.h>
#include <stdio.h>
#include <iostream>
#include "MainClass.h"

using namespace std;

CListRemoveEveryN::CListRemoveEveryN() {
    head = NULL;
}

CListRemoveEveryN::~CListRemoveEveryN() {
    ReleaseList();
}

void CListRemoveEveryN::ReleaseList() {
    
    if (head) {
        STACK *p;
        while (head) {
            p = head;
            head = head->next;
            delete p;
        }
        head = NULL;
    }
}

void CListRemoveEveryN::print() {
    
    STACK *p = head;
    
	while (p) {
        cout << p->info << "->";
        p = p->next;
    }
    

    cout << "NULL\n";
    cin.get();
}

void CListRemoveEveryN::push(int s) {

    STACK *newItem;
    newItem = new STACK;
    newItem->info = s;
    
    if (!head) {
        head = newItem;
        head->next = NULL;
    } else {
        newItem -> next = head;
        head = newItem;
    }
    
}

void CListRemoveEveryN::remove_even(int n) {
    
    ReverseStack();
    STACK* t = head;
	STACK* t1 = head;
	int i = 1;
	while (t) {
	    
    	if (i % n != 0) {
    		t1 = t;
    		t = t->next;
    	} else {
    	if (t == head) {
    		head = head->next;
    		delete t;
    	} else {
    		t1->next = t->next;
    		delete t;
    		t = t1->next;
    	}   
    }
    ++i;
}

    cout << "Stack after function: " << endl;
    print();
}


void CListRemoveEveryN::ReverseStack() {  
	
	int g = counter();
	int tmp[g], i = 0;
    
    	STACK *p = head;    
    
    	while (p != NULL) {
       		tmp[i++] = p->info;
        	p = p->next;
    	}

    	ReleaseList();
    	for (i = 0; i < g; i++) {
    	    push(tmp[i]);
    	}
}


int CListRemoveEveryN::counter() {

    STACK *p = head;
    int i = 0;
    
	while (p) {
        p = p->next;
        ++i;
    }
    return i;
}
