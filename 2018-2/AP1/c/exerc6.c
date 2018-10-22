#include <stdio.h>

int main(){

	int a, b, c;

	printf("Informe 3 valores inteiros: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("O produto dos numeros lidos e: %d\n", a*b*c);
	printf("A soma dos numeros lidos e: %d\n", a+b+c);
	printf("a subtracao dos numeros lidos e: %d\n", a-b-c);

	printf("a soma dos valores anteriores e: %d", (a*b*c)+(a+b+c)+(a-b-c));

	return 0;
}
