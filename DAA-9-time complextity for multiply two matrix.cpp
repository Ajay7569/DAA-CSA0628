#include <stdio.h>
#include <time.h>

#define N 3

void multiplyMatrices(int mat1[N][N], int mat2[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (int k = 0; k < N; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[N][N];

    clock_t start_time = clock();
    multiplyMatrices(mat1, mat2, result);
    clock_t end_time = clock();
    double cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    printf("Resultant Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("Time taken: %f seconds\n", cpu_time_used);

    return 0;
}
