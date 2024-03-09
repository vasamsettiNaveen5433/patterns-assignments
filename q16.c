#include<stdio.h>
void main()
{
	int i,j,n,row;
	printf("Enter the rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	for(j=0,n=1;j<row-i;j++,n++)
	{
	printf("%d",n);
        n=n+j;
	}
	printf("\n");
	}
}
