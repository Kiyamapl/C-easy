#include <stdlib.h>
#include <stdio.h>
int** createMatrix(int N){
    int** mat = malloc(N*sizeof(int*));
    for(int i=0;i<N;i++){
        mat[i] = malloc(N*sizeof(int));
    }
    for(int y=0; y<N; y++){
        for(int x=0; x<N; x++){
            mat[y][x] = x*y;
        }
    }
    return mat;
}
int main() {
    int N = 20;
    int **mat = createMatrix(N);
    for(int y=0; y<N; y++){
        for(int x=0; x<N; x++){
            printf("%3d ", mat[y][x]);
        }
        printf("\n");
    }
    for(int i=0;i<N;i++){
            free(mat[i]);
        }
    free(mat);
    return 0;
}
