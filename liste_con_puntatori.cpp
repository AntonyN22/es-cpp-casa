#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Definizione della struttura del nodo
typedef struct Node {
    int data;
    char* desc;
    struct Node* next;
} Node;

// Funzione per creare un nuovo nodo
Node* createNode(int data,char* desc) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Errore di allocazione della memoria.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->desc = (char*)malloc(strlen(desc) + 1); // Allocazione della memoria per la stringa
    if(!newNode->desc){ 
        printf("Errore di allocazione della memoria per la stringa.\n"); 
        free(newNode); 
        exit(1); 
    }
    strcpy(newNode->desc,desc);
    
    newNode->next = NULL;
    return newNode;
}

// Funzione per inserire un nodo in testa
void insertAtHead(Node** head, int data,char* desc) {
    Node* newNode = createNode(data,desc);
    newNode->next = *head;
    *head = newNode;
}

// Funzione per inserire un nodo in coda
void insertAtTail(Node** head, int data,char* desc) {
    Node* newNode = createNode(data,desc);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Funzione per cercare un elemento nella lista
Node* searchElement(Node* head, int data) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == data) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

// Funzione per eliminare un elemento dalla lista
void deleteElement(Node** head, int data) {
    Node* temp = *head;
    Node* prev = NULL;

    // Se il nodo da eliminare è la testa
    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Cercare il nodo da eliminare
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    // Se l'elemento non è presente nella lista
    if (temp == NULL) return;

    // Scollegare il nodo dalla lista
    prev->next = temp->next;
    free(temp);
}

// Funzione per stampare la lista
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("[%d %s]-> ", temp->data,temp->desc);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    insertAtHead(&head, 3,"tre");
    insertAtHead(&head, 1,"uno");
    insertAtTail(&head, 5,"cinque");
    insertAtTail(&head, 7,"sette");

    printf("Lista iniziale: ");
    printList(head);

    Node* found = searchElement(head, 5);
    if (found) {
        printf("Elemento %s trovato nella lista.\n", found->desc);
    } else {
        printf("Elemento non trovato nella lista.\n");
    }

    deleteElement(&head, 3);
    printf("Lista dopo l'eliminazione di 3: ");
    printList(head);

    return 0;
}
