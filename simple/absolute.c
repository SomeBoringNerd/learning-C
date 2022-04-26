#include <stdio.h>


int main()
{
	int QI_de_Corentyn = 0;
	printf("Veuillez rentrer un nombre entier (ET RIEN D'AUTRE SINON JE VIENS TE BRISER ANTHONIBGRHJBZAEJHGRBVJHAEBGRHBAERGVBHJANRGBNAOJENBGRJHBAGRB)\n");
	scanf("%d", &QI_de_Corentyn);
	
	if(QI_de_Corentyn < 0)
		QI_de_Corentyn *= -1;
	
	printf("le nombre entré est %d\n", QI_de_Corentyn);
	
	return 0;
}
