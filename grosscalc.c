#include<stdio.h>
int main()
{
printf("ENTER BASIC SALARY: \n");
float sal;
scanf("%f", &sal);
float da = 0.6*sal;
float hra = 0.15*sal;
float gross = sal + da + hra;
printf("GROSS SALARY = %f", gross);
}
