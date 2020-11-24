#include <stdio.h>
#include <stdlib.h>



int main(void) {
int kactane,sayi,i,toplam=0;float ort;
printf("kac sayi gireceksin>>");
scanf("%d",&kactane);
for(i=1;i<=kactane;i++){
	printf("%d. pozitif sayiyi giriniz (cikmak icin 0) >)",i);
	scanf("%d",&sayi);
	if(sayi==0)
	break;
	else
		if (sayi<0){
			printf("hani pozitif girecektin!\n");
			i--;
			continue;}
	else
	toplam+=sayi;}
if (i>1){
	ort=(double) toplam/(i-1);
	printf("%d sayi girildi, toplam=%d, ortalama=%2.f\n",i-1,toplam,ort);
	
}
system("pause");
	return 0;
}
