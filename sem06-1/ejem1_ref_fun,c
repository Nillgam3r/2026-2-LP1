// gestion de matrices
#include <stdio.h>
#define MAX_FIL 4
#define MAX_COL 4

int mat[MAX_FIL][MAX_COL];

void ini_matriz(int matriz[MAX_FIL][MAX_COL])
{
    for (size_t i = 0; i < MAX_FIL; i++)
    {
        for (size_t j = 0; j < MAX_COL; j++)
        {
            matriz[i][j] = 0;
        }
    }
}
// mostrar la matriz
void mostrar_mat(int matriz[MAX_FIL][MAX_COL])
{
    for (size_t i = 0; i < MAX_FIL; i++)
    {
        for (size_t j = 0; j < MAX_COL; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat1[MAX_FIL][MAX_COL]; // se crea la matriz
    int mat2[MAX_FIL][MAX_COL] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    // mat1
    printf("Matriz 1:\n");
    ini_matriz(mat1);
    mostrar_mat(mat1);
    // mat2
    printf("Matriz 2:\n");
    mostrar_mat(mat2);
    ini_matriz(mat2);
    mostrar_mat(mat2);
}
