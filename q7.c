#include<stdio.h>
void main()
{
	int i,j,m,row;
	char ch;
	printf("Enter the rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	for(j=0,ch='A',m=1;j<row-i;j++)
	{
	if(j%2==0)
        printf("%c",ch++);
	else
	printf("%d",m++);
	}
	printf("\n");
	}
}

