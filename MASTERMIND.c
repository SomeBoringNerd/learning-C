#include <stdio.h>

const int MAX_TENTATIVE = 3;
int TENTATIVE = 1;
int VICTORY = 0;

const char CODE_FINAL[4] = {'R', 'O', 'J', 'V'};
char ENTERED_CODE[4];

int main()
{
    while (TENTATIVE != MAX_TENTATIVE || VICTORY)
    {
        fflush(stdin);

        scanf("%c", ENTERED_CODE);
    }

    return 0;
}