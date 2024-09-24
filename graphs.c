#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int length = 3;

struct Node{
    int count;
    char name[100];
    struct Node* array[length];
};

struct Graph{
    int count;
    struct Node* array[length];
};

struct Graph* __init_Graph(struct Graph* graph)
{
    if(graph == NULL) { graph = (struct Graph*)malloc(sizeof(struct Graph)); graph->count = 0; }
    return graph;
}

struct Node* __init_Node(struct Node* node, const char* nname)
{
    if(node == NULL) { node = (struct Node*)malloc(sizeof(struct Node)); node->count = 0; strcpy(node->name, nname); }
    return node;
}

void add_node(struct Graph* graph, struct Node* node)
{
    if(graph == NULL) __init_Graph(graph);
    if(graph->count <= length) graph->array[graph->count++] = node;
}

void add_edge(struct Node* node1, struct Node* node2)
{
    if(node1 != NULL && node2 != NULL)
    {
        node1->array[node1->count++] = node2;
        node2->array[node2->count++] = node1;
    }
}

int main(void)
{
    struct Graph* graph = NULL;
    graph = __init_Graph(graph);

    struct Node *node1 = NULL, *node2 = NULL, *node3 = NULL;
    node1 = __init_Node(node1, "Первая вершина");
    node2 = __init_Node(node2, "Вторая вершина");
    node3 = __init_Node(node3, "Третья вершина");

    add_node(graph, node1);
    add_node(graph, node2);
    add_node(graph, node3);

    add_edge(node1, node2);
    add_edge(node2, node3);  

    return 0;  
}
