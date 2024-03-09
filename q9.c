#include<stdio.h>
void main()
{
	int i,j,m,n,k,row;
	char ch;
	printf("Enter the row\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	for(k=0,ch='A';k<row-i-1;k++,ch++)
		printf("  ");
	for(j=0,ch,n=1;j<=i;j++)
	{
		if(i%2==0)
		printf("%c ",ch++);
		else
		printf("%d ",n++);	
        }
	printf("\n");
	}
}
		
