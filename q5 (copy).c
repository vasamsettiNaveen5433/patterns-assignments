#include<stdio.h>
void main()
{
	int i,j,row;
	char ch;
	printf("Enter the rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	for(j=0,ch='A';j<=i;j++)
	{
	 if(j%2==0)
           {
		   printf("%c",ch);
		   ch=ch+2;
	   }
	 else
	   printf("*");
	  }
        printf("\n");
	}
}
