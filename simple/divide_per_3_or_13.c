#include <stdio.h>

int main()
{
	float number;

	printf("veuillez rentrer un nombre entier\n");
	scanf("%f", &number);

	float finish = number / 3;
	printf("nombre choisis : %f\ndivisé par 3 : %f\n", number, finish);
	if(finish == (int)finish)
		printf("divisible par 3\n");
	else{
		finish = number / 13;
		if(finish == (int)finish)
			printf("divisible par 13\n");
		else
			printf("non divisible par 3 ou 13\n");
	}
}
