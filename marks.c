#include <stdio.h>
int main()
{
int arr[5][5];
int i=1,j=1;
int marks[]={0,0,0,0,0};
for(i=0;i<5;i++)
for(j=0;j<5;j++){
scanf("%d", &arr[i][j]);
marks[i] +=arr[i][j];}

int key = 0;
for( i=1;i<5;i++)
if(marks[key]<marks[i])
key=i;

for(i=0;i<5;i++)
printf( "TOTAL  MARKS OF STUDENT NO. %d = %d \n", (i+1),marks[i]);
printf("HIGHEST MARKS OBTAINED BY STUDENT %d = %d \n", (key+1), marks[key]);
return 0;
}
