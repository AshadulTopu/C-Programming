#include<stdio.h>

int main()
{
     ///variable declare
    int row,col;

    printf("Enter row & column for matrix(like:3 4):  ");
    scanf("%d %d", &row, &col);
    printf("\n");
    int  matrix_A[row][col],matrix_Transpose[col][row],i,j;

    ///matrix A value input
      for(i=0; i<row; i++)
      {
          for(j=0; j<col; j++)
          {
              printf("Enter the value of the matrix A= {[%d][%d]}: ", i, j);
              scanf("%d", &matrix_A[i][j]);
          }
          printf("\n");
      }
      printf("\n");

        ///matrix A value output
      printf("\n");
      printf("Matrix of A: \n");
      for(i=0; i<row; i++)
      {
          printf("\t");
          for(j=0; j<col; j++)
          {
              printf("%d ", matrix_A[i][j]);
          }
          printf("\n");
      }
    ///swap value
      printf("\n\n");
        printf("Transpose Matrix : \n");
      for(i=0; i<row; i++)
      {
          for(j=0; j<col; j++)
          {
              matrix_Transpose[j][i] = matrix_A[i][j];
          }
      }
      ///matrix Transpose value output
      for(i=0; i<col; i++)
      {
          printf("\t");
          for(j=0; j<row; j++)
          {
              printf("%d ", matrix_Transpose[i][j]);
          }
          printf("\n");
      }
      getch();
}

