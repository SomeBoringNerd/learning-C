#include <stdio.h>

int main()
{
    // première boucle (les tables allant de 1 a 10)
    for(int table = 1; table <= 10; table++)
    {
        // on print le numéro de la table
        printf("Table de multiplication de %d\n", table);

        // on multplie le numéro de 1 a 10
        for(int multipliant = 1; multipliant <= 10; multipliant++)
        {
            int tmp = table * multipliant;
            printf("%d x %d = %d\n", table, multipliant, tmp);
        }
    }
    return 0;
}