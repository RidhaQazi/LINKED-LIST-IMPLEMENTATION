#include <stdio.h>
#include <stdlib.h>

//A linked list is a way to store data where each item (called a node) is connected to the next one.

typedef struct Node {
    int data;
    struct Node *next;
} NODE;

void addAtStart(NODE** first, int);
void addAtEnd(NODE** first, int);
void delete(NODE** first, int);
void display(NODE** first);
void freeMemory(NODE** first);

int main() {
    NODE *first = NULL;
    int choice, value;

    while(1) {
        printf("\nChoose an operation: \n");
        printf("1. Insert at Start \n");
        printf("2. Insert at End \n");
        printf("3. Delete a Node \n");
        printf("4. Display the List \n");
        printf("5. Exit \n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                    printf("\n Enter value: ");
                    scanf("%d", &value);
                    addAtStart(&first, value);
                    break;
            case 2:
                    printf("\n Enter value: ");
                    scanf("%d", &value);
                    addAtEnd(&first, value);
                    break;
            case 3:
                    printf("\n Enter value to be deleted: ");
                    scanf("%d", &value);
                    delete(&first, value);
                    break;
            case 4:
                    display(&first);
                    break;
            case 5:
                    freeMemory(&first);
                    printf("\n Exiting.... \n");
                    return 0;
            default:
                    printf("\n Invalid Operation selected! Try Again! \n");
        }
    }
}


void addAtStart(NODE** first, int value) {
    NODE *newNode = (NODE*)malloc(sizeof(NODE));   //Allocates memory for a new node.
    newNode->data = value;                         //Stores user input in the node.
    newNode->next = *first;                        //Links new node to the old first node.
    *first = newNode;
}


void addAtEnd(NODE** first, int value) {
    NODE *newNode = (NODE*)malloc(sizeof(NODE));
    newNode->data = value;
    newNode->next = NULL;

    if(*first == NULL) {
        *first = newNode;
        return;
    }

    NODE *temp = *first;
    while (temp-> next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void delete(NODE** first, int value) {

    if (*first == NULL) {
        printf("List is Empty !! \n");
        return;
    }

    NODE *temp = *first, *prev = NULL;

    if (temp != NULL && temp->data == value) {
        *first = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\nValue not found! \n");
        return;
    }

    if (temp->next == NULL) {
        prev->next = NULL;
    }
    else {
        prev->next = temp->next;
    }
    
    free(temp);
}


void display(NODE** first) {
    NODE *temp = *first;
    printf("\nLinked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL \n");
}


void freeMemory(NODE** first) {
    NODE *temp;
    while (*first != NULL) {
        temp = *first;
        *first = (*first)->next;
        free(temp);
    }
}
