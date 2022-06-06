#include<stdio.h>

int main()
{
    ///variable decler
    int size_1,size_2;

    printf("Enter how many row & column you want to be input(like:3 4):  ");
    scanf("%d %d", &size_1, &size_2);
    int  matrix_A[size_1][size_2],matrix_B[size_1][size_2],matrix_C[size_1][size_2],i,j;

    ///matrix A value input
      for(i=0; i<size_1; i++)
      {
          for(j=0; j<size_2; j++)
          {
              printf("Enter the value of the matrix A{[%d][%d]}: ", i, j);
              scanf("%d", &matrix_A[i][j]);
          }
          printf("\n");
      }
      printf("\n\n\n");
      ///matrix B value input
      for(i=0; i<size_1; i++)
      {
          for(j=0; j<size_2; j++)
          {
              printf("Enter the value of the matrix B{[%d][%d]}: ", i, j);
              scanf("%d", &matrix_B[i][j]);
          }
          printf("\n");
      }
        ///matrix A value output
      printf("\n\n\n");
      printf("Matrix of A: \n");
      for(i=0; i<size_1; i++)
      {
          printf("\t");
          for(j=0; j<size_2; j++)
          {
              printf("%d ", matrix_A[i][j]);
          }
          printf("\n");
      }
        ///matrix B value output
        printf("\n\n\n");
        printf("Matrix of B: \n");
      for(i=0; i<size_1; i++)
      {
          printf("\t");
          for(j=0; j<size_2; j++)
          {
              printf("%d ", matrix_B[i][j]);
          }
          printf("\n");
      }

      printf("\n\n\n");
        printf("Sum Of Matrix A & B: \n");
      for(i=0; i<size_1; i++)
      {
          printf("\t");
          for(j=0; j<size_2; j++)
          {
              matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
              printf("%d ", matrix_C[i][j]);
          }
          printf("\n");
      }
      getch();
}

