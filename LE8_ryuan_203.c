#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 50

int main()
{

    char inBuff[size];
    int N, i;

    printf("Please enter the number of element of the array (N > 0): \n");
    fgets(inBuff, size, stdin);
    sscanf(inBuff, "%d", &N);
    if (N < 0)
    {
        printf("Input error. The input has to be positive.");
        exit(-1);
    }
    int *p;

    p = (int *)malloc(N * sizeof(int));
    srand((unsigned)time(NULL));

    for (i = 0; i < N; i++)
    {
        p[i] = rand() % N + 1;
    }

    printf("Content of the array: \n");
    for (i = 0; i < N; i++)
    {
        printf("%d\t", p[i]);
    }
    printf("\n");

    free(p);

    return 0;
}