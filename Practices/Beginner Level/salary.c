#include<stdio.h>
int main(){
    int number, hours;
    float money,salary;
    scanf("%d%d%f", &number, &hours, &money);
    salary = hours*money;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %0.2f\n",salary);

    return 0;
}
