#include <stdio.h>

int main()
{

    float number1, number2 = 0;
    printf("Super calculator 3000000000000000000\n");
    printf("_________________________\n");
    printf("Nombre 1\n");
    scanf("%f", &number1);
    printf("_________________________\n");
    printf("Nombre 2\n");
    scanf("%f", &number2);
    printf("_________________________\n");
    int operation_type = 4;

    printf("Quelle opération voulez vous faire ?\n0 >> addition\n1 >> soustraction\n2 >> multiplication\n3 >> division\nchoix : ");

    scanf("%d", &operation_type);
    printf("_________________________\n");
    float resultat = 0;

    switch (operation_type)
    {
        case 0:
            resultat = number1 + number2;
            if(resultat == (int)resultat)
                printf("Le résultat est %d\n", (int)resultat);
            else
                printf("Le résultat est %f\n", resultat);
            break;

        case 1:
            resultat = number1 - number2;
            if(resultat == (int)resultat)
                printf("Le résultat est %d\n", (int)resultat);
            else
                printf("Le résultat est %f\n", resultat);
            break;

        case 2:
            resultat = number1 * number2;
            if(resultat == (int)resultat)
                printf("Le résultat est %d\n", (int)resultat);
            else
                printf("Le résultat est %f\n", resultat);
            break;

        case 3:
            if(number2 != 0){
                resultat = (number1 / number2);
                if(resultat == (int)resultat)
                    printf("Le résultat est %d\n", (int)resultat);
                else
                    printf("Le résultat est %f\n", resultat);
            }else{  
                printf("Le résultat est impossible (division par 0 = infini)\n");
            }
            break;
    
        default:
            printf("l'opération demandée est invalide.\n");
            break;
    }

    printf("_________________________\n");

    return 0;
}