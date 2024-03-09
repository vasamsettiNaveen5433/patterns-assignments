#include<stdio.h>
void main()
{
	int i,j,row,m;
	printf("Enter the rows\n");
	scanf("%d",&row);


	for(i=0;i<row;i++)
	{
	for(j=0,m=row;j<=i;j++)
        {
	if(i%2==0)
	{
       	printf("%d",m);
	m--;
	}
	else
	printf("*");
	}
	printf("\n");
	}
}
