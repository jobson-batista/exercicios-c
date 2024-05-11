#include <stdio.h>

int main() {
    
    float n1, n2, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);

    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    media = (n1+n2)/2;
    
    printf("A média obtida foi: %.2f\n", media);

    if(media <= 4.0 ) {
        printf("REPROVADO!\n");
    } else if (media > 4 && media < 7) {
        printf("EXAME!\n");
    } else {
        printf("APROVADO!\n");
    }
    
}