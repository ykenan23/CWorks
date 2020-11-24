#include <stdio.h>
int main(void)
{
	int i,kup,toplam,sayi,basamak1,basamak2,basamak3,birim1,sayac=1;
	
	
	for(i=1;i<=999;i++)
	{
	basamak1=i%10;
	basamak2=i%100;
	if (basamak2>=10)
	{if(basamak2%10==0)
	basamak2=basamak2/10;
	else
	birim1=basamak2%10;
	basamak2=(basamak2-birim1);
	basamak2=basamak2/10;
	}
	else
	basamak2=0;
	sayac++;
	
	
	basamak3=i%1000;
	basamak3=basamak3-basamak2-basamak1;
	basamak3=basamak3/100;
	toplam=(basamak1*basamak1*basamak1)+(basamak2*basamak2*basamak2)+(basamak3*basamak3*basamak3);
	printf("%d.sayi: %d\n",sayac,toplam);
	}
	
	
	
	return (0);
}
