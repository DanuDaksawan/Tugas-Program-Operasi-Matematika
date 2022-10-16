#include <stdio.h>

float bilanganAritmatika (float a, float b, float n){
	float Un;
	Un = a+(n-1)*b;
	return Un;
}

float jumlahsukuAritmatika (float a, float b, float n){
	float Sn;
	Sn = (n*0.5)*(2*a+(n-1)*b);
	return Sn;
}

int main(){
	
	float a, b, n;
	
	printf("RUMUS BARISAN BILANGAN ARITMATIKA \n\n");
	printf("Masukan Angka Pertama: \n");
	scanf("%f", &a);
	printf("Masukkan Angka Kedua: \n");
	scanf("%f", &b);
	printf("Masukkan Banyak Angka ke-n: \n");
	scanf("%f", &n);

	printf("Suku ke-n adalah: %.2f \n", bilanganAritmatika(a, b, n));
	printf("Banyak Suku ke-n adalah: %.2f \n", jumlahsukuAritmatika(a, b, n));
	
	return 0;
}
