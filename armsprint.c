#include <stdio.h>
int main()
{
int sum =0,d,i=1;
for(i=1;i<=500;i++)
{
int c= i;
while(c>0)
{
d = c%10;
c=c/10;
sum+=d*d*d;
}
if(sum==i)
printf("%d \n", i);
sum=0;
}
return 0;
}
