#include <stdio.h>
int main()
{
int  a,b;
printf("ENTER 2 NUMBERS: \n");
scanf("%d %d", &a, &b);
int temp;
if(a<b){
temp = a;
a=b;
b=temp;}

int mod = a%b;
float a1 = a;
float b2=b;
float q =a1/b2;
if(mod==0)
printf("0  %d", q);
else
printf("%d / %d  %f", a, b, q);
return 0;
}
