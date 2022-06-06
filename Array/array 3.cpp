#include<stdio.h>

int main()
{
    int array[10]= {1,5,6,2,10,15,20,23,25,30};
    int sum, even_sum=0, odd_sum;
    for(int i=0; i<10; i++)
    {
        if(array[i]%2==0)
        {
            printf("%d => %d=> even\n", i, array[i]);
            even_sum+=array[i];
        }
        else
        {
            printf("%d => %d=> odd\n", i, array[i]);
            odd_sum+=array[i];
        }
        sum+=array[i];
    }
    printf("even sum = %d\n",even_sum);
    printf("odd sum = %d\n",odd_sum);
    printf("total sum = %d\n",sum);
}
