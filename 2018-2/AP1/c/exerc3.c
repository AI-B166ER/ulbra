#include <stdio.h>
int main(void){
	
	float lt, te, vm, dst;

	printf("Informe o tempo gasto na viagem: ");
	scanf("%f", &te);
	
	printf("Informe a velocidade media: ");
	scanf("%f", &vm);

	dst = te * vm;
	lt = dst/12;

	printf("Foram gastos %1.f ", lt, " litros de gasolina");

	return 0;
}
