#include <stdio.h>
int main(){
	
	float ar_total, ar_base, ar_lateral, altura, raio, qtde, custo, pi, c_lata;

	c_lata = 150;
	pi=3.14;

	printf("informe o valor do raio do cilindro");
	scanf("%f", &raio);

	printf("informe o valor da altura do cilindro: ")
	scanf("%f", &altura);

	ar_base = pi*(raio*raio);
	ar_lateral = 2*pi*raio*altura;
	ar_total = ar_base+ar_lateral;
	qtde = ((ar_total/3)/5);

	custo = qtde*c_lata;
	printf("sera gastas %f ", qtde, " latas");
	printf("com um custo de R$: %f", custo);

	return 0;


}
