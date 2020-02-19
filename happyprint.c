#include <stdio.h>
int main()
{
int i = 1;
int c = 0;
while(c<10)
{
if(happy(i)==0){
printf("%d\n ", i);
c++;
}
i++;
}
return 0;
}
int happy(int x)
{
int i=1;
for(i=1;i<=100;i++)
{
int c = x;int sum = 0;
while(c>0)
{
int d = c%10;
c=c/10;
sum+=d*d;
}
if(sum==1)
return 0;
x=sum;
}
return 1;
}
