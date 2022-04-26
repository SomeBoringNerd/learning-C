#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int rng = rand() % 100;
    int attempts, isFinished = 0;
    // pour une raison ou une autre, enlever cette ligne fout le bordel
    attempts = 0;
    while(!isFinished)
    {
        int tmp = 0;
        
        printf("(vous avez utilisé %d/10 essais)\n", attempts);
        printf("DONNEZ UN PRIX ENTRE 0 ET 100 : ");
        scanf("%d", &tmp);

        if(tmp == rng)
        {
            printf("OUI OUI OUI VOUS AVEZ GAGNÉ !1!!!11!!11\n");
            isFinished = 1;
            return 0;
        }else if(tmp < rng){
            printf("C'EST PLUS !\n");
            attempts++;
        }else if(tmp > rng){
            printf("C'EST MOINS !\n");
            attempts++;
        }

        if(attempts == 9)
        {
            printf("OH MINCE, VOUS AVEZ PERDU !1!!!11!!11\n");
            return 0;
        }
    }

    return 0;
}