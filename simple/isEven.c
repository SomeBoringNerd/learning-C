#include <stdio.h>

int main()
{
    int number = 0;
    printf("_________________________\n");
    printf("isEven : l'exercice le plus vieux de l'histoire\n");
    printf("_________________________\n");
    printf("\n");
    printf("Quel nombre devons nous vérifier ? : \nnombre : ");
    scanf("%d", &number);
    printf("_________________________\n");
    if((float)number / 2 == (int)number / 2)
    {
        printf("%d est un nombre pair !\n", number);
    }else{
        printf("%d est un nombre impair !\n", number);
    }
    printf("_________________________\n");

    return 0;
}   