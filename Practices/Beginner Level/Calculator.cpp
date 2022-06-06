#include<stdio.h>

printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

SummationFunction (int arr[],int size)
{
   int summation =0;
    for (int j=0; j<size; j++)
    {
        summation += arr[j];
    }
    printf("\n");
}

SubtractionFunction (int arr[],int size)
{
   int subtraction =0;
    for (int j=0; j<size; j++)
    {
        subtraction -= arr[j];
    }
    printf("\n");
}

MultiplicationFunction (int arr[],int size)
{
   int multipli =0;
    for (int j=0; j<size; j++)
    {
        multipli += arr[j];
    }
    printf("\n");
}

DivisionFunction (int arr[],int size)
{
   int division =0;
    for (int j=0; j<size; j++)
    {
        division += arr[j];
    }
    printf("\n");
}

int main()
{
    int size=10, arr[size];

    char ch;
    printf(" Enter A for summation, S for subtraction, M for multiplication, D for division: ");
    scanf("%c", &ch);

    for (int i=0; i<size; i++)
    {
        printf("Enter a value for [%d]",i);
        scanf("%d", &arr[i]);
    }


    printf("\n");
    printf("Array: ");
    printArray(arr,size);

 //   char ch;
 //   printf(" Enter A for summation, S for subtraction, M for multiplication, D for division");
 //   scanf("%c", &ch);

    if(ch == 'A' || ch == 'a')
    {
        SummationFunction(arr,size);
    }
    else if(ch == 'S' || ch == 's')
    {
        SubtractionFunction (arr,size);
    }
    else if (ch == 'M' || ch == 'm')
    {
        MultiplicationFunction (arr,size);
    }
    else if (ch == 'D' || ch == 'd')
    {
        DivisionFunction (arr,size);
    }
}
