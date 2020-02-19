#include <stdio.h>
int main()
{
int denom;
printf("ENTER AMOUNT: \n");
scanf("%d", &denom);
printf("NUMBER OF 100 NOTES REQUIRED = %d\n ", (denom/100));
denom=denom%100;
printf("NUMBER OF 50 NOTES REQUIRED = %d\n ", (denom/50));
denom = denom%50;
printf("NUMBER OF 10 NOTES REQUIRED = %d\n ", (denom/10));
return 0;
}
