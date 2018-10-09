#include <stdio.h>

int main(){
	float salfixo, comissao, salfinal;
	int n_func, n_carros;

	printf("Informe o n vendedor: ");
	scanf("%d", &n_func);

	printf("Informe o n de carros vendidos: ");
	scanf("%d", &n_carros);

	printf("informe o salario fixo: ");
	scanf("%f", &salfixo);

	printf("informe o valor da comissao por carro: ");
	scanf("%f", &comissao);

	salfinal = salfixo + n_carros * comissao;
	printf("o funcionario de codigo: %d", n_func);
	printf("tera salario final de R$: %2.f", salfinal);

}
