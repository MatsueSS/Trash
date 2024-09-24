#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct Graph;

struct Vector{
    int length;
    int capacity;
    struct Graph** graph;
};

struct Graph{
    char name[100];
    struct Vector* nodes;
};

void iniciateVector(struct Vector* vector)
{
    if(vector->graph == NULL){
        vector->capacity = 10;
        vector->length = 0;
        vector->graph = (struct Graph**)malloc(sizeof(struct Graph)*vector->capacity);
    }
    else{
        vector->graph = (struct Graph**)realloc(vector->graph, sizeof(struct Graph)*vector->capacity);
        vector->capacity += 10;
    }
}

void add_node(struct Vector* vector, struct Graph* node)
{
    if(vector->graph == NULL || vector->length == vector->capacity) iniciateVector(vector);
    vector->graph[vector->length++] = node;
}

void add_edge(struct Graph* node1, struct Graph* node2)
{
    if(node1->nodes == NULL) iniciateVector(node1->nodes);
    if(node2->nodes == NULL) iniciateVector(node2->nodes);
    add_node(node1->nodes, node2);
    add_node(node2->nodes, node1);
}

int main(void)
{
    struct Vector* tree = NULL;
    iniciateVector(tree);

    struct Graph* node1 = (struct Graph*)malloc(sizeof(struct Graph));
    struct Graph* node2 = (struct Graph*)malloc(sizeof(struct Graph));
    struct Graph* node3 = (struct Graph*)malloc(sizeof(struct Graph));

    strcat(node1->name, "Первая вершина");
    strcat(node2->name, "Вторая вершина");
    strcat(node3->name, "Третья вершина");

    add_node(tree, node1);
    add_node(tree, node2);
    add_node(tree, node3);

    add_edge(node1, node2);
    add_edge(node2, node3);
}