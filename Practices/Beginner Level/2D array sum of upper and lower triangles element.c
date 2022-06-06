#include<stdio.h>

int main()
{
     ///variable declare
    int row,col;

    printf("Enter row & column for matrix(like:3 3):  ");
    scanf("%d %d", &row, &col);
    printf("\n");
    int  matrix_A[row][col],i,j,upper_sum=0, lower_sum=0, sum=0;

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
    ///upper and lower element sum
      for(i=0; i<row; i++)
      {
          for(j=0; j<col; j++)
          {
              if(i<j)
              {
                  upper_sum +=matrix_A[i][j];
              }
              else if (i>j){
                lower_sum +=matrix_A[i][j];
              }
          }
      }
      ///matrix upper and lower element sum output
      printf("\nDiagonal Matrix element sum : %d\n", upper_sum);
      printf("\nDiagonal Matrix element sum : %d\n", lower_sum);
      getch();
}



