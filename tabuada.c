#include <stdio.h>
#include <math.h>

int main()
{
    int number, calc, i;
    printf("Digite o número que deseja saber a tabuada: ");
    scanf("%d", &number);
    
    for (i= 1; i<=10; i++){
        calc = (number * i);
        printf("%d x %d = %d\n", number, i, calc);
    }
    return 0;
}