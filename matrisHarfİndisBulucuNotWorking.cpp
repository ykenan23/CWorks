#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	srand(time(NULL));
	int satir,i,j,k,x,y,z,size;
	char matris[100][100];
	char kelime[size];
	z=strlen(kelime);
	printf("Kelimeyi giriniz: ");	scanf("%s",&kelime);
	printf("Kaca kac olacagini gir: ");	scanf("%d",&satir);
	if(z<=satir){
		for(i=0;i<satir;i++){
			for(j=0;j<satir;j++){
			matris[i][j] = 'A'+rand()%5;
			printf("%c ",matris[i][j]);
		}
		printf("\n");
	}

		for(i=0;i<satir;i++){
			for(j=0;j<satir;j++){
				x=matris[i][j];
				y=kelime[k];
			if (x==y)
			{printf("Kelimenin %d'inci harfi %d'inci satir %d'inci sutundadir.\n",k+1,i+1,j+1);
			for(k=1;k<z;k++){
			
			i=i++;
				x=matris[i+1][j];
				y=kelime[k];
				if (x==y){
					printf("Kelimenin %d'inci harfi %d'inci satir %d'inci sutundadir.\n",k,i+1,j+1);	
					continue;}
				else{k=0;
					continue;}
			
			
			j=j++;
				x=matris[i][j+1];
				y=kelime[k];
				if (x==y){
					printf("Kelimenin %d'inci harfi %d'inci satir %d'inci sutundadir.\n",k,i+1,j+1);continue;}
					else{k=0;
					continue;}}
			}
			else{
		
			continue;	}
			}
			
			
		}	}return 0;
}





 


