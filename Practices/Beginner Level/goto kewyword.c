#include<stdio.h>

int main()
{
    int i =1;
    print: /// this is call label. here you can use any name.
        printf("%d\t", i);
        i++;

        if(i<5)
            goto print; /// label is calling here.

}
