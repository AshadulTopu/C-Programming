#include<stdio.h>

int main()
{
     ///variable decler
    int row_1,row_2,col_1,col_2,sum=0;

    printf("Enter row & column for first matrix(like:3 4):  ");
    scanf("%d %d", &row_1, &col_1);

    printf("Enter row & column for second matrix(like:4 3):  ");
    scanf("%d %d", &row_2, &col_2);
    printf("\n");
    int  matrix_A[row_1][col_2],matrix_B[row_2][col_2],matrix_C[row_1][col_2],i,j,k;

    while(col_1 != row_2){
        printf("Error! Column of first matrix are not equal to row of second matrix.\n\n");
        printf("Enter row & column for first matrix(like:3 4):  ");
        scanf("%d %d", &row_1, &col_1);
        printf("\n");
        printf("Enter row & column for second matrix(like:4 3):  ");
        scanf("%d %d", &row_2, &col_2);
        printf("\n");
    }

    ///matrix A value input
      for(i=0; i<row_1; i++)
      {
          for(j=0; j<col_1; j++)
          {
              printf("Enter the value of the matrix A= {[%d][%d]}: ", i, j);
              scanf("%d", &matrix_A[i][j]);
          }
          printf("\n");
      }
      printf("\n");

      ///matrix B value input
      for(i=0; i<row_2; i++)
      {
          for(j=0; j<col_2; j++)
          {
              printf("Enter the value of the matrix B= {[%d][%d]}: ", i, j);
              scanf("%d", &matrix_B[i][j]);
          }
          printf("\n");
      }

        ///matrix A value output
      printf("\n");
      printf("Matrix of A: \n");
      for(i=0; i<row_1; i++)
      {
          printf("\t");
          for(j=0; j<col_1; j++)
          {
              printf("%d ", matrix_A[i][j]);
          }
          printf("\n");
      }
        ///matrix B value output
        printf("\n");
        printf("Matrix of B: \n");
      for(i=0; i<row_2; i++)
      {
          printf("\t");
          for(j=0; j<col_2; j++)
          {
              printf("%d ", matrix_B[i][j]);
          }
          printf("\n");
      }

      printf("\n\n");
        printf("Multiplication Of Matrix A & B: \n");
      for(i=0; i<row_1; i++)
      {
          for(j=0; j<col_2; j++)
          {
              for(k=0; k<col_1; k++){
              sum += matrix_A[i][k] * matrix_B[k][j];
              }
              matrix_C[i][j] = sum;
              sum=0;
          }
      }
      ///matrix C/Multiplication value output
      for(i=0; i<row_1; i++)
      {
          printf("\t");
          for(j=0; j<col_2; j++)
          {
              printf("%d ", matrix_C[i][j]);
          }
          printf("\n");
      }
      getch();
}
