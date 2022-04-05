#include <stdio.h>


int main()
{

    int month = 0;
    
    printf("entrez un mois (1-12)");
    scanf("%d", &month);

    switch(month){
        case 1:
            printf("nombre de jours dans le mois : 31\n");
            break;
        case 2:
            printf("nombre de jours dans le mois : 28 ou 29\n");
            break;
        case 3:
            printf("nombre de jours dans le mois : 30\n");
            break;
        case 4:
            printf("nombre de jours dans le mois : 31\n");
            break;
        case 5:
            printf("nombre de jours dans le mois : 30\n");
            break;
        case 6:
            printf("nombre de jours dans le mois : 31\n");
            break;
        case 7:
            printf("nombre de jours dans le mois : 30\n");
            break;
        case 8:
            printf("nombre de jours dans le mois : 31\n");
            break;
        case 9:
            printf("nombre de jours dans le mois : 30\n");
            break;
        case 10:
            printf("nombre de jours dans le mois : 31\n");
            break;
        case 11:
            printf("nombre de jours dans le mois : 30\n");
            break;
        case 12:
            printf("nombre de jours dans le mois : 31\n");
            break;
        
        default:
            printf("la valeur entrée n'est pas valide\n");
            break;
    }

    return 0;
}