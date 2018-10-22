#include <stdio.h>

int main(){

	float p_fab, imp, rev, p_final, imposto, revenda;

	imposto = 45;
	revenda = 28;

	printf("informe o preco de fabrica do computador: ");
	scanf("%f", &p_fab);

	rev = p_fab*revenda/100;

	imp = p_fab*imposto/100;

	p_final = p_fab + imp + rev;

	printf("O preco do computador e de R$ ", p_final);

	return 0;
}
