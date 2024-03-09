#include<stdio.h>
void main()
{
	int i,j,n,k,m,row;
	printf("Enter the rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	for(j=0,k=1+i,m=row;j<=i;j++,m--,k=k+m)
	{
	 printf("%d ",k);
        
	}
	printf("\n");
	}
}

