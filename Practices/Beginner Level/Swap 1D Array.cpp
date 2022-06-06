#include<stdio.h>

int main()
{
    int size=10, fv, sv,temp, indexF, indexS;
    ///print Array
    int arr[size] = {5,10,3,4,7,9,8,6,2,1};

    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ///input value
    printf("Enter your first value: ");
    scanf("%d", &fv);
    printf("Enter your second value: ");
    scanf("%d", &sv);

    ///finding of index number
    for(int i =0; i<size; i++)
    {
        if(arr[i] == fv)
        {
            indexF = arr[i];
        }
        if(arr[i] == sv)
        {
            indexS = arr[i];
        }
    }
    printf("index number of %d = %d\n", fv, indexF);
    printf("index number of %d = %d\n", sv, indexS);
    ///swap value
    temp =arr[indexF];
    arr[indexF] = arr[indexS];
    arr[indexS] = temp;
    printf("\n");

    ///print value
    for(int i =0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
