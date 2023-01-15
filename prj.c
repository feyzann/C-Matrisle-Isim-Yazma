#include <stdlib.h>
#include <stdio.h>


int main(){
	char isim[] = "FEYZANUR";
	int i,j,k=0,N, isim_uzunlugu=8;
	
	do{	//matris boyutunu kullanýcýdan al
		printf(" Matrisin boyutunu 5-15 arasinda giriniz: ");	
		scanf("%d", &N);
	}while(N<5 || N>15);	//Kriterleri saðlamýyorsa tekrarla
	
	for(i=0; i<N; i++){//satýr
		for(j=0; j<N; j++){//sütun
			printf(" %c",isim[k]);//k. indisteki harfi yazdýr
			k++;
			if(k>=isim_uzunlugu)	//ismin sonuna gelmiþse k'yý sýfýrla
				k=0;
		}
		printf("\n");	//döngü sonunda alt satura geçer
	}
	
	
	printf(" -----------------------------\n");	//birazcýk daha güzel olan yöntem
	k=0;
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf(" %c",isim[k++%isim_uzunlugu]);	//k'yý sýfýrlamaya gerek yok. 
		//	k++;	//mod alma sayesinde isim uzunluðunu hiçbir zaman geçmeyecek sürekli tekrarlayacak
		}
		printf("\n");
	}
	
	return 0;
}
