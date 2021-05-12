// mmult.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int A[N][N], B[N][N], C[N][N] = {0};
    int i, j, k;
    srand(time(NULL)); // inicializa random generator
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            A[i][j] = rand()%100;B[i][j] = rand()%100;
        }
    }
    clock_t begin, end;
    double time_spent;begin = clock();
    
    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
            for(k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
    
    end = clock();
    time_spent = (double)(end -begin) / CLOCKS_PER_SEC;
    printf("Elapsed time: %.2lf seconds.\n", time_spent);
    return 0;
}