/*
    printf("Cada character ocupa %d byte(s)\n", (int) sizeof(char));
    printf("Cada integer ocupa %d byte(s)\n", (int) sizeof(int));
    printf("Cada float ocupa %d byte(s)\n", (int) sizeof(float));
    printf("Cada double ocupa %d byte(s)\n\n", (int) sizeof(double));
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float conta1, conta2;
    
    
    do {
        printf("Digite um número para o 'a'\n");
    scanf("%d", &a);
    } while (a == 0);
    
    printf("Digite um número para o 'b'\n");
    scanf("%d", &b);
    printf("Digite um número para o 'c'\n");
    scanf("%d", &c);
    
    conta1 = (-b+(sqrtf(pow(b,2)-(4*a*c))))/(2*a);
    conta2 = (-b-(sqrtf(pow(b,2)-(4*a*c))))/(2*a);
    
    printf("Os zeros da função, são %.2f e %.2f\n", ((float) conta1), ((float) conta2));
    
    return 0;
}
