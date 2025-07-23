#include <stdio.h>
#include <stdlib.h>

#define MAX 3

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int data) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void addEdge(Node *graph[], int startNode, int endNode) {
    Node *newNode1 = createNode(endNode);
    newNode1->next = graph[startNode];
    graph[startNode] = newNode1;
    Node *newNode2 = createNode(startNode);
    newNode2->next = graph[endNode];
    graph[endNode] = newNode2;
}

void printGraph(Node *graph[]) {
    printf("[\n");
    for (int i = 0; i <  MAX; i++) {
        printf(" ");
        Node *temp = graph[i];
        if (temp == NULL) {
            printf("NULL");
        } else {
            while (temp != NULL) {
                printf("%d", temp->data);
                if (temp->next != NULL) printf("->");
                temp = temp->next;
            }
            printf("->NULL");
        }
        printf(",\n");
    }
    printf("]\n");
}

int main() {
    Node *graph[MAX] = {NULL};
    printGraph(graph);
    addEdge(graph, 1, 2);
    printGraph(graph);
    addEdge(graph, 0, 1);
    printGraph(graph);
    return 0;
}
