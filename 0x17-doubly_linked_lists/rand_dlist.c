#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x;
    struct Node* next;
    struct Node* prev;
} Node;

int main() {
    Node* tail = malloc(sizeof(Node));
    if (!tail){
        return 1;
    }
    tail->x = 1;
    tail->prev = NULL;
    tail->next = malloc(sizeof(Node));
    if (!tail->next){
        return 2;
    }
    tail->next->x = 33;
    tail->next->prev = tail;
    tail->next->next = NULL;
    Node* head = tail->next;

    return 0;
}