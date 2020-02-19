#include <stdio.h>
#include <string.h>

int todec(char* n, int l, int b)
{
	int i=0, res=0;
	for(i=0;i<l;i++)
	{
		switch(*(n+i))
		{
			case 'A':
				res=res*b+10;
				break;
				case 'B':
				res=res*b+11;
				break;
				case 'C':
				res=res*b+12;
				break;
				case 'D':
				res=res*b+13;
				break;
				case 'E':
				res=res*b+14;
				break;
				case 'F':
				res=res*b+15;
				break;
				default:
					res=res*b+((int)*(n+i)-48);
		}
	}
	return res;
}
void fromdec(int n, int b)
{
	char res[32];
	int i=0,j=0;
	while(n>0)
	{
		if(n%b>9)
		res[i]=(char)(n%b+55);
		else
		res[i]=(char)(n%b+48);
		i++;
		n=n/b;
	}
	for(j=strlen(res)-1;j>=0;j--)
	printf("%c", res[j]);
	printf("\n");
}
int main()
{
	char inp[32];
	int b1,b2;
	printf("ENTER YOUR NUMBER: \n");
	scanf("%s",inp);
	printf("ENTER OPTION FOR PRESENT SYSTEM OF NUMBER:\n 10 IF DECIMAL\n 8 IF OCTAL \n 2 IF BINARY \n 16 IF HEXADECIMAL");
	scanf("%d",&b1);
	printf("ENTER OPTION FOR SYSTEM OF NUMBER U WANT TO CONVERT TO:\n 10 IF DECIMAL\n 8 IF OCTAL \n 2 IF BINARY \n 16 IF HEXADECIMAL");
	scanf("%d",&b2);
	fromdec(todec(inp,strlen(inp),b1), b2);
}
