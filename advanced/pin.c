#include <stdio.h>

int main()
{
    int unlocked = 0;
    int mot_de_passe = 8008;

    printf("_______________________________________\n");
    printf("              VirtualPhone             \n");
    printf("_______________________________________\n");
    int attempts = 0;
    while(!unlocked)
    {
        
        printf("[UNLOCK] Mot de passe : ");
        int tmp_mdp;
        scanf("%d", &tmp_mdp);

        if(tmp_mdp == mot_de_passe){
            printf("téléphone deverouillé ! \n");
            unlocked = 1;
        }else{
            if(attempts != 2){
                printf("Désolé, essayez de nouveau.\n");
                attempts++;
            }else{
                printf("L'authentification a échouée à trois reprises. Le système a été verrouillé pendant 60 secondes.\n");
                return 0;
            }
        }
    }
    return 0;
}