#include <stdlib.h>
#include <stdio.h>


int main(){
	char isim[] = "FEYZANUR";
	int i,j,k=0,N, isim_uzunlugu=8;
	
	do{	//matris boyutunu kullan�c�dan al
		printf(" Matrisin boyutunu 5-15 arasinda giriniz: ");	
		scanf("%d", &N);
	}while(N<5 || N>15);	//Kriterleri sa�lam�yorsa tekrarla
	
	for(i=0; i<N; i++){//sat�r
		for(j=0; j<N; j++){//s�tun
			printf(" %c",isim[k]);//k. indisteki harfi yazd�r
			k++;
			if(k>=isim_uzunlugu)	//ismin sonuna gelmi�se k'y� s�f�rla
				k=0;
		}
		printf("\n");	//d�ng� sonunda alt satura ge�er
	}
	
	
	printf(" -----------------------------\n");	//birazc�k daha g�zel olan y�ntem
	k=0;
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf(" %c",isim[k++%isim_uzunlugu]);	//k'y� s�f�rlamaya gerek yok. 
		//	k++;	//mod alma sayesinde isim uzunlu�unu hi�bir zaman ge�meyecek s�rekli tekrarlayacak
		}
		printf("\n");
	}
	
	return 0;
}
