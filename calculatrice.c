#include <stdio.h>

int main()
{
    while(1){
        float number1, number2 = 0;
        printf("Super calculator 3000000000000000000\n");
        printf("_________________________\n");

        int operation_type = 5;
        printf("Quelle opération voulez vous faire ?\n0 >> addition\n1 >> soustraction\n2 >> multiplication\n3 >> division\n4 >> quitter\nchoix : ");
        scanf("%d", &operation_type);
        
        if(operation_type == 4){
            printf("Au revoir !\n");
            return 0;
        }

        printf("_________________________\n");

        printf("Nombre 1\n");
        scanf("%f", &number1);
        
        printf("_________________________\n");
        
        printf("Nombre 2\n");
        scanf("%f", &number2);
        
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
        printf("Voulez vous continuer ?\n0 >> continuer\nn'importe quoi d'autre >> quitter\nchoix : ");
        scanf("%d", &operation_type);
        
        if(operation_type !=0){
            printf("Au revoir !\n");
            return 0;
        }else{
#if linux
            system("clear");
#endif
#if _WIN32
            system("cls");
#endif
        }
    }
    return 0;
}