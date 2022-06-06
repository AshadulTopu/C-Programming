#include<stdio.h>

int main()
{
    int n=5, x=1, y=n, t1,t2,r1,r2;

    for(int i=n; i>=1; i--){
        t1 =x;
        t2=y;
        r1=i;
        r2=i+1;

        for(int j=n; j>=i; i--){
            if((i+j)%2==0){
                printf("%d ",t1);
            }
            else{
                printf("%d ",t2);
            }
            t1 =t1- r1++;
            t2 =t2- r2++;
        }
        y += i-1;
        x += i;
        printf("\n");
    }
}
