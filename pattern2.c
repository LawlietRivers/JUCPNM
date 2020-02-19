#include <stdio.h>
int main()
{
int n;
printf("ENTER VALUE OF n \n");
scanf("%d", &n);
printf("\n");int i=1;
for( i=1;i<=n/2+1;i++)
{int j=1,k=1;
for( j=n/2+1;j>=1;j--)
{
if(j==i)
printf("+");
else
printf(" ");
}
for( k =2;k<=n/2+1;k++)
{
if(k==i)
printf("+");
else
printf(" ");
}
printf("\n");
}
for( i=n/2;i>=1;i--)
{int j=1,k=1;


for( j=n/2+1;j>=1;j--)
{
if(j==i)
printf("+");
else
printf(" ");
}



for( k =2;k<=n/2+1;k++)
{
if(k==i)
printf("+");
else
printf(" ");
}
printf("\n");}

}
