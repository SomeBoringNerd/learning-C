#include <stdio.h>

int main()
{
    int age = 0;

    printf("quel âge avez vous ?\n");
    scanf("%d", &age);

    if(age <= 17){
        printf("tu es mineur\n");
    }else{
        printf("vous êtes majeur\n");
        switch (age)
        {
        case 69:
            printf("nice\n");
            break;
        
        default:
            break;
        }
    }

    return 0;
}