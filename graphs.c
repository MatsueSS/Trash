https://docs.google.com/forms/d/e/1FAIpQLSdXGTM2go6QduzRNAShZjEaVZJB_lJpuBqMMezEPLqM_rzgig/viewform
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6



void get_random_edge(int matrix[SIZE][SIZE])
{
    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        matrix[i][i] = 0;
        for(int j = i + 1; j < SIZE; j++){
            matrix[i][j] = (rand()%2)*(rand()%20);
            matrix[j][i] = matrix[i][j];
        }
    }
}

void get_user_edge(int matrix[SIZE][SIZE])
{
    int temp;
    for(int i = 0; i < SIZE; i++){
        matrix[i][i] = 0;
        for(int j = i + 1; j < SIZE; j++){
            printf("Введите расстояние %d - %d:", i + 1, j + 1);
            scanf("%d", &temp);
            matrix[i][j] = temp;
            matrix[j][i] = matrix[i][j];
        }
    }
}

void get_matrix(int matrix[SIZE][SIZE])
{
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void dijkstra(int matrix[SIZE][SIZE], int d[SIZE], int v[SIZE])
{
    int minIndex, min, temp, beginIndex = 0;
    for (int i = 0; i<SIZE; i++)
    {
        d[i] = 10000;
        v[i] = 1;
    }
    d[beginIndex] = 0;
    // Шаг алгоритма
    do {
        minIndex = 10000;
        min = 10000;
        for (int i = 0; i<SIZE; i++)
        { // Если вершину ещё не обошли и вес меньше min
            if ((v[i] == 1) && (d[i]<min))
            { // Переприсваиваем значения
                min = d[i];
                minIndex = i;
            }
        }
        // Добавляем найденный минимальный вес
        // к текущему весу вершины
        // и сравниваем с текущим минимальным весом вершины
        if (minIndex != 10000)
        {
            for (int i = 0; i<SIZE; i++)
            {
                if (matrix[minIndex][i] > 0)
                {
                    temp = min + matrix[minIndex][i];
                    if (temp < d[i])
                    {
                        d[i] = temp;
                    }
                }
            }
            v[minIndex] = 0;
        }
    } while (minIndex < 10000);
}

int main()
{
    int a[SIZE][SIZE]; // матрица связей
    int d[SIZE]; // минимальное расстояние
    int v[SIZE]; // посещенные вершины
    int temp;
    // Инициализация матрицы связей
    get_random_edge(a);
    // Вывод матрицы связей
    get_matrix(a);
    //Инициализация вершин и расстояний
    dijkstra(a, d, v);
    // Вывод кратчайших расстояний до вершин
    printf("\nКратчайшие расстояния до вершин: \n");
    for (int i = 0; i<SIZE; i++)
        printf("%5d ", d[i]);

    return 0;
}
