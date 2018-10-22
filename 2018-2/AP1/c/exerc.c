#include <stdio.h>

int main (){

	float p_fab, imp, rev, p_final, imposto = 30, revenda = 10;

	printf("Informe o preço de fabrica docomputador: ");
	scanf("%f", &p_fab);

	imp = p_fab*imposto/100;
	rev = p_fab*revenda/100;
	p_final = p_fab + imp + rev;

	printf("O preco final do computador é R$ %.2f", p_final, "\n\n\n");

	return 0;
}
