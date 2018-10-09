#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

	string nome;
	int idade;

	printf("Nome do nadador: ");
	scanf("%s", &nome);
	
	printf("Nome do nadador: ");
	scanf("%d", &idade);

	if ( idade >= 5 && idade <=10 )
	{
		printf(" Nome: %s\n", nome);
		printf(" Categoria: Infantil");

	} elseif (idade >= 11 && idade <=17)
	{
		printf(" Nome: %s\n", nome);
		printf(" Categoria: Juvenil");
		
	} elseif (idade  >= 18 ){
		printf(" Nome: %s\n", nome);
		printf(" Categoria: Adulto");
	} else{
		printf("A idade minima é 5 anos!\n\n");
	}






	return 0;

}