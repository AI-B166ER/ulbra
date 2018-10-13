#include <stdio.h>

int main(){
	
	float a, b, c, ma, mh;

	printf("informe tres valores reais: ");

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	ma = (a+b+c)/3;

	mh = 3/((1/a) + (1/b) + (1/c));

	printf("A media aritmetica dos valores lidos é %f", ma);
	printf("a media harmonica dos valores lidos e %f", mh);


	return 0;
}
