#include<stdio.h>
#include<conio.h>

main()
{
	int r,c,i,j;
	
	printf("Enter r:");
	scanf("%d",&r);
	
	printf("Enter c:");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],sum[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	
		for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",b[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	printf("\n SUM \n");

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		   sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		   printf("%d",sum[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	
}