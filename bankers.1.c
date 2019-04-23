#include<stdio.h>
#include<conio.h>
int main()
{
	int all[5][4]={{0,0,1,2},{1,0,0,0},{1,3,5,4},{0,6,3,2},{0,0,1,4}};
	int max[5][4]={{0,0,1,2},{1,7,5,0},{2,3,5,6},{0,6,5,2},{0,6,5,6}};
	int rem[5][4]={0};
	int avail[5][4]={1,5,2,0};
	int i,j,k,m,n;
	printf("allocation \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",all[i][j]);
		}
		printf("\n");
	}
	printf("maximum \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",max[i][j]);
		}
		printf("\n");
	}
	printf("remainder \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			rem[i][j]= rem[i][j]+max[i][j]-all[i][j];
			printf("%d",rem[i][j]);
		}
		printf("\n");
	}
}
