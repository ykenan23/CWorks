#include <stdio.h>
#include <math.h>
#include <stdlib.h>
mukemmel_bul (int a){
int i,j,boyut,sayac,muk;
int temp;{
		for (a;a>1;){
			if (a%2==0){
			muk++;
			a=a/2;
			continue; }

		else{
			if (muk!=0){		
			printf("2'ye art arda %d kez bolundugu icin mukemmeligi ",muk,a);
			printf("%d'dir.\n",muk);break;
			return 1;}
			else{
			return 0;}}}}}
int main(void){		
int deger1,deger2,temp1,temp2;
printf("Mukemmeligi bulunacak sayi araliginin 1.elemanini giriniz->");
scanf("%d",&deger1);
printf("Mukemmeligi bulunacak sayi araliginin 2.elemanini giriniz->");
scanf("%d",&deger2);
for (deger1;deger1<deger2;deger1++){
	if (mukemmel_bul(deger1)==0){
	continue;}
	else{
	printf("%d sayisinin mukemmeligi:",deger1);
	break;}}
return 0;}

