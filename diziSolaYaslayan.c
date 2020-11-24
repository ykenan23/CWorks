#include<stdio.h>


int main ()
{
	int i,e,j,sayac;
	printf("kare matris sayisi girin->>");
	scanf("%d",&e);
	int matris[e][e];

	
	for(i=0;i<e;i++)
	{

		//matris[i+sayac][j]=1;
		sayac++;
	
	for(j=0;j<e;j++)
		{
		matris[i][j]=0;
		printf("%d  ",matris[i][j]);
		printf("\n");
		}


		
	return 0;
}}
