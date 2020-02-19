#include <stdio.h>
int main()
{
long long int sum =0;
int  i = 1;
printf("ENTER n \n");
int  n;
scanf("%d", &n);
while(i<=n)
{
int j=i;
long long int fact = i;
for( j=i-1;j>=2;j--)
fact*=j;
sum+=fact;i++;
}
printf("SERIES SUM = %lld", sum);
return 0;
}

