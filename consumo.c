#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    printf("+--------------------------+\n");
    printf("|  Calculadora de Consumo  |\n");
    printf("+--------------------------+\n\n");
    
    float km, liters;

    char exit = 1;

    while(exit) {
        printf("Distância total (km): ");
        scanf("%f", &km);

        printf("Combustível gasto (litro): ");
        scanf("%f", &liters);

        printf("O consumo do veículo foi de %.2f km/litro\n\n",km/liters);

        printf("--> Deseja sair? [S/N] ");
        scanf(" %c", &exit);

        exit = toupper(exit);

        if(strcmp(&exit, "S") == 0) {
            printf("\nAté logo!\n");
            break;
        }
    }
    

}