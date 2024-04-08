/*Ingrese como parametros el ancho y alto de un rectángulo*/
#include <stdio.h>
int main(){
    int alto, ancho;

    printf("Alto: ");
    scanf("%d", &alto);

    printf("Ancho: ");
    scanf("%d", &ancho);

    if (alto < ancho || alto > ancho)
    {
        /* code */
        for (size_t i = 0; i < alto; i++)
        {
            /* code */
            for (size_t j = 0; j < ancho; j++)
            {
                /* code */
                printf("*");
            }
            printf("\n");
            
        }
        
    }else{
        printf("Alto: %d, Ancho: %d, no son las dimenciones de un rectangulo \n", alto, ancho);
    }
    

    return 0;
}