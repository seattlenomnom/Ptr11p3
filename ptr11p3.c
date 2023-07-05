/* sourcefile for ptr11p3.
 *
 * This is a mule to observe the interaction between a list head and the
 * function insertEntry.
 *
*/


/* includes */

#include <stdio.h>

/* defines */




/* structure declarations */

struct entry{
    int value;
    struct entry *next;
};




/* function declarations */

void insertEntry(struct entry *newEntry, struct entry *existEntry);
void printSLL( struct entry *head);


/* main */

int main(int argc, char *argv[]){

/* create four entries and a new entry */
    struct entry n1, n2, n3, n4, newEntry;
    struct entry listHead, *p2NewEntry, *p2existEntry;

/* define the structures */
    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;
    newEntry.value = 500;

/* create the singly linked list */

    listHead.next = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = (struct entry *) 0;
    newEntry.next = (struct entry *) 0;
    p2NewEntry = &newEntry;

/* print original SLL */

    printSLL(listHead.next);



/* add new entry to SSL */
    p2existEntry = &listHead;

    insertEntry(p2NewEntry, p2existEntry);


/* print new SSL */

    printSLL(&listHead);



    return(0);
}


/* function definitions */

void insertEntry(struct entry *newEntry, struct entry *existEntry){
    newEntry->next = existEntry->next;
    existEntry->next = newEntry;
}


void printSLL( struct entry *head){
    struct entry *p2Entry;
    p2Entry = head;
    while(p2Entry != (struct entry *) 0){
        printf("%i ", p2Entry->value);
        p2Entry = p2Entry->next;
    }
    printf("\n");

}






