#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 10

void buildMatrix(unsigned int matrix_size) {
    char **square = calloc(matrix_size, sizeof(char *));
    for (int i = 0; i < matrix_size; ++i) {
        square[i] = calloc(matrix_size, sizeof(char));
    }
    system("clear");
    printf("\tMatrix\n");

    for (int i = 0; i < matrix_size; i++) {
        printf("\n");
        for (int j = 0; j < matrix_size; j++) {
            square[i][j] = i + j;
            printf("  %d  |", i + j);
        }
    }
   free(square);
}

int main() {
    int matrix_size = 3;
    printf("Enter size of n x n matrix");
    scanf("%d", &matrix_size);
    if (matrix_size > MAX_LEN) {
        printf("Exceeded max length! \n");
    }
    else if (matrix_size < 0){
        printf("Matrix size can't be negative \n");
    }
    else if (matrix_size == 0)
    {
        printf("matrix size can't be 0 \n");
    }
    else{
    buildMatrix(matrix_size);
    }
    return 0;

}
