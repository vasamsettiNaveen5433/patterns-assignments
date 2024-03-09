#include<stdio.h>
void main()
{
	int i,j,k,row;
	char ch;
	printf("Enter the no of rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	for(k=0;k<row-i-1;k++)
	   {
	   printf("  ");
           }
	    for(j=0,ch='A'+(2*i);j<i*2+1;j++,ch--)
	   {
             printf(" %c",ch);
	   }
	   printf("\n");
	}
}
