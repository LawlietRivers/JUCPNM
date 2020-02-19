#include <stdio.h>
int main()
{
printf("ENTER VALUE OF n \n");
int n;
scanf("%d", &n);int i=1,j=5;
printf("\n");
for( i = 1;i<=n;i++)
{
for(j=5;j>=1;j--)
{
if(j>i)
printf(" ");
else
printf("%d", j);
}
printf("\n");
}
return 0;
}
