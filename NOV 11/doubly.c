#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head = NULL, * tail = NULL;

void create() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Value: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;

    if (head == NULL) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void insert_beg() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Value: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL) {
        head->prev = newnode;
    }
    
    head = newnode;
}

void insert_end() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Value: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->prev = tail;
    newnode->next = NULL;

    if (tail != NULL) {
        tail->next = newnode;
    } else {
        head = newnode;
    }
    
    tail = newnode;
}

void delete_beg() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct node* temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    } else {
        tail = NULL;
    }

    free(temp);
}

void del_end() {
    if (tail == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node* temp = tail;

    if (tail->prev != NULL) {
        tail = tail->prev;
        tail->next = NULL;
    } else {
        head = tail = NULL;
    }

    free(temp);
}

void display() {
    struct node* temp = head;

    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    printf("\n");
}

int main() {
    int ch;

   do {  
       printf("Choose an option:\n1. Create\n2. Insert at Beginning\n3. Insert at End\n4. Delete from Beginning\n5. Delete from End\n6. Display\n0. Exit\n");
       scanf("%d", &ch);
       switch(ch) {
           case 1: create(); break;
           case 2: insert_beg(); break;
           case 3: insert_end(); break; 
           case 4: delete_beg(); break; 
           case 5: del_end(); break; 
           case 6: display(); break; 
           case 0: printf("Exiting...\n"); break; 
           default: printf("Invalid choice. Please try again.\n");
       }
   } while(ch != 0);

   return 0;  
}