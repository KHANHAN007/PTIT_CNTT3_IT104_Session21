#include <stdio.h>
#define MAX 3

void initGraph(int graph[MAX][MAX])
{
    for (int i = 0; i < MAX; ++i)
    {
        for (int j = 0; j < MAX; ++j)
        {
            graph[i][j] = 0;
        }
    }
}
void addEdge(int graph[MAX][MAX], int firstNode, int secondNode)
{
    graph[firstNode][secondNode] = graph[secondNode][firstNode] = 1;
}
void printGraph(int graph[MAX][MAX])
{
    printf("[\n");
    for (int i = 0; i < MAX; ++i)
    {
        printf(" ");
        for (int j = 0; j < MAX; ++j)
        {
            printf(" %d ", graph[i][j]);
        }
        printf("\n");
    }
    printf("]\n");
}
int main()
{
    int graph[MAX][MAX];
    initGraph(graph);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    printGraph(graph);
    return 0;
}