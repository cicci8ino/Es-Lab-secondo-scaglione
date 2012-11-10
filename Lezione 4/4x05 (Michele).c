#include <stdio.h>
#include <time.h>
#define DIM 3
#define MAXRAND 10

int x,y;
int matrix[DIM][DIM];
int matrix_reloaded[DIM*2][DIM*2];

int main()
{
    srand(time(NULL));
    printf("Matrice originale:\n");
    for (y=0; y<DIM; y++)
        {
        for (x=0; x<DIM; x++)
            {
            matrix[y][x]=rand()%MAXRAND;
            printf("%3d",matrix[y][x]);
            }
            printf("\n");
        }
    printf("Matrice trasformata:\n");
    for (y=0; y<DIM*2; y++)
        {
        for (x=0; x<DIM*2; x++)
            {
            if (x<DIM && y<DIM)
               {
               matrix_reloaded[y][x]=matrix[y][x];
               }
            else if (x>=DIM && y<DIM)
               {
               matrix_reloaded[y][x]=matrix[y][(DIM*2)-x-1];
               }
            else if (x<DIM && y>=DIM)
               {
               matrix_reloaded[y][x]=matrix[(DIM*2)-y-1][x];
               }
            else if (x>=DIM && y>=DIM)
               {
               matrix_reloaded[y][x]=matrix[(DIM*2)-y-1][(DIM*2)-x-1];
               }
            printf("%3d",matrix_reloaded[y][x]);
            }
            printf("\n");
        }
    system("pause>nul");
    return 0;
}
