/*Luego de ingresar el parametro de ancho y alto se dibuje un cuadrado*/

#include <stdio.h>
int main(){
    int alto, ancho;


    printf("Alto: ");
    scanf("%d", &alto);
    
    printf("Ancho: ");
    scanf("%d", &ancho);

    if (alto == ancho)
    {
        /* code */
        for (size_t i = 0; i < alto; i++)
        {
            for (size_t j = 0; j < ancho; j++)
            {
                printf("*");
            }
            printf("\n");
                        
        }
        
    }else
    {
        printf("Alto %d, Ancho %d, no son datos de un cuadrado\n", alto, ancho);
    }
    
    
}