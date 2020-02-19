#include <stdio.h>
int main()
{
int n;
float sum=0;
int i=1;
printf("ENTER VALUE OF n \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
int j = i;
long long int fact=i;
for(j=i-1;j>=2;j--)
fact*=j;
sum+=fact*i*(i+1);

}
printf("SERIES SUM = %f", sum);
return 0;
}
