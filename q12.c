#include<stdio.h>
void main()
{
	int i,j,row;
	char ch;

	printf("Enter the rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	for(j=0,ch='A'+row-1;j<row  ;j++,ch--)
	{
	if(j<i)
	printf("*");
	else
	printf("%c",ch);
	}
	printf("\n");
	
	}
}
        

