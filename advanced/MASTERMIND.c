#include <stdio.h>

int TENTATIVE = 3;
const int debug_verbose = 0;
const char CODE_FINAL[4] = {'R', 'O', 'J', 'V'};
char ENTERED_CODE[4];

int main()
{
    while (1)
    {
        printf("______________________________________\nentrez une suite de 4 lettres majuscule parmis les suivantes : \n 'R', 'O', 'J', 'V', 'B', 'N'\n>> ");
        fflush(stdin);
        scanf("%c%c%c%c", &ENTERED_CODE[0],&ENTERED_CODE[1],&ENTERED_CODE[2],&ENTERED_CODE[3]);

        int good = 0;

        for(int i = 0; i != 3; i++)
        {
            // logique de si les 4 lettres sont les mêmes
            if(ENTERED_CODE[i] == CODE_FINAL[i])
            {
                good++;
            }
        }

        if(good == 3)
        {
            printf("\nYOU WIN !\n");
            return 0;
        }else{
            TENTATIVE--;
            printf("\nLOOPÉ ! il vous reste %d tentatives \n\n", TENTATIVE);

            int bien_place = 0;
            int existant_mais_mal_place = 0;

            // code entré
            for(int i = 0; i != 4; i++)
            {
                // code hardcodé
                for(int j = 0; j != 4; j++)
                {
                    if(debug_verbose) printf("%c / %c\n", ENTERED_CODE[i], CODE_FINAL[j]);
                    if(ENTERED_CODE[i] == CODE_FINAL[j])
                    {
                        if(j == i){
                            bien_place++;
                            if(debug_verbose) printf("%d est bien placé\n", i);
                        }else{
                            existant_mais_mal_place++;
                            if(debug_verbose) printf("%d est mal placé\n", i);
                        }
                        
                    }
                }
            }
            int mauvais = 4 - bien_place - existant_mais_mal_place;

            printf("nombre de lettres bien placée : %d\n", bien_place);
            printf("nombre de lettres existante mais mal placée : %d\n", existant_mais_mal_place);
            printf("nombre de lettres mauvaises : %d\n", mauvais);
        }

        if(TENTATIVE == 0){
            return 0;
        }
    }

    return 0;
}