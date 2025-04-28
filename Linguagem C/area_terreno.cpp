#include<stdio.h>

main()
{
	float l, c, ar;
	
	printf("\t\t Calcula area de terrenos \n\n");
	
	printf("Digite a largura do terreno: ");
	scanf("%f", &l);
	
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &c);
	
	ar = l * c;
	
	printf("A area do terreno do terreno de largura %.2f e comprimento %.2f = %.2f", l, c, ar);
	
	system("pause");
}
