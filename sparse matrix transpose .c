#include<stdio.h>
#include<stdlib.h>

typedef struct matrix{
	int row;
	int col;
	int value;
}matrix;

int main()
{
	int i;
	matrix mat1[50],mat2[50];
	printf("enter no of rows ,cols ,non zero value\n");
	scanf("%d%d%d",&mat1[0].row,&mat1[0].col,&mat1[0].value);
	printf("enter the matrix\n");
	for(i=1;i<=mat1[0].value;i++)
	{
		scanf("%d%d%d",&mat1[i].row,&mat1[i].col,&mat1[i].value);
	}
	
	int rowcount[mat1[0].col];
	int starting[mat1[0].col];
	
	for(i=0;i<mat1[0].col;i++)
	{
		rowcount[i]=0;
		starting[i]=0;
	}
	
	
	for(i=0;i<mat1[0].col;i++)
	{
		rowcount[mat1[i].col-1]++;
	}
	
	starting[0]=1;
	
	for(i=1;i<=mat1[0].value;i++)
	{
		starting[i]=starting[i-1]+rowcount[i-1];
	}
	
	mat2[0].col=mat1[0].col;
	mat2[0].value=mat1[0].value;
	mat2[0].row=mat1[0].row;
	
	for(i=1;i<=mat1[0].value;i++)
	{
		int j = starting[mat1[i].col-1]--;
		mat2[j].col=mat1[i].row;
		mat2[j].row=mat1[i].col;
		mat2[j].value=mat1[i].value;
	}
	
	for(i=1;i<=mat2[0].value;i++)
	{
		printf("%d %d %d \n",mat2[i].row,mat2[i].col,mat2[i].value);
	}
		
}
