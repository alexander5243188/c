/*Crea un cuadrado formado por 3 filas con 3 asteriscos cada una*/
# include <stdio.h>
int main(){
    for (size_t i = 0; i < 3; i++)
    {
        /* code */
        for (size_t j = 0; j < 3; j++)
        {
            /* code */
            printf("+");
        }
        printf("\n");
    }
    return 0;
}