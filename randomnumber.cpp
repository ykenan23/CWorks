#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void printRandoms(int upper, 
							int count) 
{ 
	int i; 
	for (i = 0; i < count; i++) { 
		int num = (rand() % 
		(upper - 0 + 1)) + 0; 
		printf("%d ", num); 
	} 
} 

// Ana program
int main() 
{ 
	int  upper = 1, count = 9; 

	// Zaman Fonksiyonu ile rastgele sayý üretilir.
	srand(time(0)); 

	printRandoms(upper, count); 

	return 0; 
} 

