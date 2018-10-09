#include <stdio.h>

int main(){
	int x, y, res;
	float quo;

	printf("Informe 2 valores inteiros: ");
	scanf("%d", &x);
	scanf("%d", &y);

	quo = x/y;

	res = x % y;

	printf("O quociente da divisao de %d ", x, " por %d ", y , " e %f ", quo);



	return 0;

}
