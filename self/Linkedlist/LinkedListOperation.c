// Linked List Operations
#include<stdio.h>
#include<stdlib.h>

// Structure for Node
struct Node
{
    int data;
    struct Node *link;
};

// Creating a fresh Node
struct Node* createNewNode(int data, struct Node* pointer){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->link = pointer;
    return newNode;
}

// Calculate the LinkList size
int linkedListSize(struct Node* head){
    if(head == NULL){
        return 0;
    }
    else{
        int size = 0;
        struct Node* temp = head;
        while (temp != NULL)
        {
            size++;
            temp = temp->link;
        }
       return size; 
    }
}

// Insert a Node
void insertLinkedList(struct Node** head, int data, int position){
    if(position < 1){
        printf("Invalid Position, Insertion failed.\n");
    }
    else if (position == 1){
        struct Node* newNode = createNewNode(data, *head);
        *head = newNode;
    }
    else{
        int size = linkedListSize(*head);
        struct Node* tempNode = *head;

        if(position > size){
            position = size+1;
        }
        
        while ((position-1) > 1){ // -1 beacause the temp node is pointing at node one not head pointer
            tempNode = tempNode->link;
            position--;
        }

        struct Node* newNode = createNewNode(data, tempNode->link);
        tempNode->link = newNode;
    }
}

// Update a Node
void updateNode(struct Node** head, int data, int position){
    int size = linkedListSize(*head);
    if(position<1 || position>size){
        printf("Invalid Position, Updation failed.\n");
    }
    else{
        struct Node* tempNode = *head;
        while (position>1){
            position--;
            tempNode = tempNode->link;
        }
        tempNode->data = data;
    }
}

// Delete a node
void deleteNode(struct Node** head, int position){
    int size = linkedListSize(*head);
    if(position<1 || position>size){
        printf("Invalid Position, deletion failed.\n");
    }
    else if (position==1){
        struct Node* tempNode = *head;
        *head = tempNode->link;
    }
    
    else{
        struct Node* previousNode = *head;
        struct Node* currentNode = previousNode->link;
        while ((position-1)>1){
            position--;
            previousNode = previousNode->link;
            currentNode = currentNode->link;
        }
        previousNode->link = currentNode->link;
        free(currentNode);
    }
}

// Print Linked List
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

// Delete Linkedlist
void deleteLinkedList(struct Node** head) {
    struct Node* tempNode = *head;
    while (tempNode != NULL) {
        struct Node* nextNode = tempNode->link;
        free(tempNode);
        tempNode = nextNode;
    }
    *head = NULL;  
}

// Print Reverse
void printreverse(struct Node* head){
    if(head == NULL){
        return;
    }
    head = head->link;
    printf("%d ", head->data);
}

int main(){
    struct Node* head = NULL; // pointer(Head) for struct Node data type
    int listSize, tempValue, position, option;

    // Creating a Node
    printf("Please input the size of list: ");
    scanf("%d", &listSize);
    for(int i=0; i<listSize; i++){
        printf("Please enter the No:");
        scanf("%d", &tempValue);
        insertLinkedList(&head, tempValue, 1); // Inserting at beginning
    }
    printLinkedlist(head);
    printf("size: %d\n", linkedListSize(head));

    // Operation menu
    char cont = 'y';
    while(cont == 'y'){
        printf("\nPlease select the function you want to perform:\n");
        printf("1. Update\n");
        printf("2. Delete\n");
        printf("3. Insert\n");
        printf("4. Delete Linkedlist\n");
        printf("Please select(1/ 2/ 3/ 4): ");
        scanf("%d", &option);

        switch (option){
        case 1:
            printf("Please enter the data:");
            scanf("%d", &tempValue);
            printf("Please input the position:");
            scanf("%d", &position);
            updateNode(&head,tempValue, position);
            printLinkedlist(head);
            printf("Do you want to continue Operation(y/n): ");
            scanf(" %c", &cont);
            break;
        case 2:
            printf("Please input the position(to delete):");
            scanf("%d", &position);
            deleteNode(&head, position);
            printLinkedlist(head);
            printf("Do you want to continue Operation(y/n): ");
            scanf(" %c", &cont);
            break;
        case 3:
            printf("Please enter the data:");
            scanf("%d", &tempValue);
            printf("Please input the position:");
            scanf("%d", &position);
            insertLinkedList(&head,tempValue, position);
            printLinkedlist(head);
            printf("Do you want to continue Operation(y/n): ");
            scanf(" %c", &cont);
            break;
        case 4:
            deleteLinkedList(&head);
            printf("Linked list deleted and memory freed.");
            printf("Exiting...X");
            break;
        default:
            printf("Invalid Input\n");
            printf("Do you want to try again(y/n): ");
            scanf(" %c", &cont);
            break;
        }
    }
    return 0;
}