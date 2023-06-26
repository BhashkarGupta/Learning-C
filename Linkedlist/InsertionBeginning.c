// Inserting a node at beginning
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void insertBeginning(struct Node** head, int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data; // Putting the value of data in struct
    newNode->link = *head; // putting the location of previous node in the current node link
    *head = newNode; // updating the head pointer to point to current node
}

void printLinkedlist(struct Node* head){
    struct Node* current = head;
    printf("List: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->link;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL; // pointer for struct Node data type
    int listSize, tempValue;
    printf("Please input the size of list: ");
    scanf("%d", &listSize);
    for(int i=0; i<listSize; i++){
        printf("Please enter the No:");
        scanf("%d", &tempValue);
        insertBeginning(&head, tempValue);
    }
    printLinkedlist(head);
    return 0;
}