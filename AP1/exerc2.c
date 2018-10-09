#include <stdio.h>

int main(void){
	float n1, n2, n3, media;

	printf("Informe o primeiro valor: ");
	scanf("%f", &n1);
	printf("Informe o segundo valor: ");
	scanf("%f", &n2);
	printf("Informe o terceiro valor: ");
	scanf("%f", &n3);


	media = (n1+n2+n3)/3;

	printf("Os numeros lidos foram: %f %f %f", n1, n2, n3);
	printf("E a média é: %f", media);

	return 0;
}
