	#include <stdio.h>

int main(){
	int pop,ndpt,pop2,ndpt2;
	float area,pib,area2,pib2,densidade,densidade2,pibc,pibc2;
	printf("DADOS DA PRIMEIRA CARTA \n");
	printf("qual a populacao ? ");
	scanf("%d", &pop);
	printf("qual a area? ");
	scanf("%f", &area);
	printf("qual o pib? ");
	scanf("%f", &pib);
	printf("quantos numeros turisticos tem? ");
	scanf("%d", &ndpt);
	densidade= pop/area;
	pibc= pib/pop;
	printf("DADOS DA SEGUNDA CARTA\n");
	printf("qual a populacao ? ");
	scanf("%d", &pop2);
	printf("qual a area? ");
	scanf("%f", &area2);
	printf("qual o pib? ");
	scanf("%f", &pib2);
	printf("quantos numeros turisticos tem? ");
	scanf("%d", &ndpt2);
	densidade2= pop2/area2;
	pibc2= pib2/pop2;
	printf("TODOS OS DADOS REGISTRADOS DA PRIMEIRA CARTA \n");
	printf("populacao:  %d de habitantes\n", pop, "");
	printf("area: %2.f de metros quadrados\n", area, "");
	printf("pib: %2.f\n", pib, "");
	printf("numeros de pontos turisticos: %d\n", ndpt);
	printf("densidade populacional: %2.f\n", densidade);
	printf("pib per capital: %2.f\n", pibc);
	printf("TODOS OS DADOS REGISTRADOS DA SEGUNDA CARTA \n");
	printf("populacao:  %d de habitantes\n", pop2, "");
	printf("area: %2.f de metros quadrados\n", area2, "");
	printf("pib: %2.f\n", pib2, "");
	printf("numeros de pontos turisticos: %d\n", ndpt2);
	printf("densidade populacional: %2.f\n", densidade2);
	printf("pib per capital: %2.f\n", pibc2);
	return 0;
}
