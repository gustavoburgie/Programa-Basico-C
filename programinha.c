#include <stdio.h>

main(){
    int x, y;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);
    printf("Os numeros foram: %d e %d\n", x, y);

    int r;
    printf("Digite o valor a ser contado: \n");
    scanf("%d", &r);
    int n100 = r / 100;
    int n50 = r % 100 / 50;
    int n20 = r % 100 % 50 / 20;
    int n10 = r % 100 % 50 % 20 / 10;
    int n5 = r % 100 % 50 % 20 % 10 / 5;
    int n1 = r % 100 % 50 % 20 % 10 % 5;
    printf("Notas de 100: %d\n", n100);
    printf("Notas de 50: %d\n", n50);
    printf("Notas de 20: %d\n", n20);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 5: %d\n", n5);
    printf("Notas de 1: %d\n", n1);
//*/
}