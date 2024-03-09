#include<stdio.h>
void main()
{
	int i,j,row,m;
	printf("Enter the no of rows \n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
		for(j=0,m=1;j<=i;j++)
		{
		printf("%d ",m);
		m=m+2;
		}
		printf("\n");
	}
}
