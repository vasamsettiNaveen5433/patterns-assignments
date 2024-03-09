#include<stdio.h>
void main()
{
	int i,j,row,m;
	printf("Enter the rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	for(j=0,m=1;j<row-i ;j++,m+=2)
	{
	if(i%2==0)
	printf("*");
	else
	printf("%d",m);
	}
	printf("\n");
	}
}
		
