#include<stdio.h>
void main()
{
	int i,j,row,k;
	printf("Enter the no of rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
		for(j=0,k=1;j<row-i;j++,k++)
			printf("%d",k);
			printf("\n");
	}
}

