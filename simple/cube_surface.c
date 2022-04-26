#include <stdio.h>

int main()
{
    int height = 0;
    int widht = 0;
    int perim = 0;
    int isCube = 0;
    int surface = 0;

    printf("es-ce un cube ou un rectangle (0 == cube, 1 == rectangle) ?\n ");
    scanf("%d", &isCube);
    if(isCube == 0 || isCube == 1){
        if(isCube){
            printf("quel est la longueur du rectangle ?\n ");
            scanf("%d", &height);
            
            printf("quel est la largeur du rectangle ?\n ");
            scanf("%d", &widht);

            int perim = (height * 2) + (widht * 2);
            int surface = height * widht;
            printf("le rectangle a une surface de %d \net un périmètre de %d\n", surface, perim);
            if(height == widht){
                printf("(c'est un carré, pas un rectangle)\n");
            }
        }else{
            printf("quel est la cote du carré ?\n ");
            scanf("%d", &height);

            surface = height * height;
            int perim = (height * 4);
            printf("le rectangle a une surface de %d \net un périmètre de %d\n", surface, perim);
        }
    }else{
        printf("veuillez rentrer 1 ou 0 (strict)\n");
        return 1;
    }
    return 0;
}