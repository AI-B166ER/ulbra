#include <stdio.h>

int main(){
	int a,b,c,d,e;
	float media;

	printf("Informe 5 valores inteiros\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);

	media = (a+b+c+d+e)/5;
	printf("O resultado da media é: %2.f", media);
	
	return 0;

}
