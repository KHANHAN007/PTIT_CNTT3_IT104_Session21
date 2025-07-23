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
    graph[firstNode][secondNode] = 1;
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
    int firstNode = 1;
    int secondNode = 2;
    addEdge(graph, firstNode, secondNode);
    printGraph(graph);
    return 0;
}