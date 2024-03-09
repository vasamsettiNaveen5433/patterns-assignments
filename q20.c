#include<stdio.h>
void main()
{
	int i,j,k,row;
	char ch;
	printf("Enter the rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	for(k=0;k<=row-i-1;k++)
	{
	printf("  ");
	}
	for(j=0,ch='Z';j<2*i+1;j++,ch--)
	printf(" %c",ch);

	printf("\n");
	}
}
