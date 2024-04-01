#include <stdio.h>
#include <math.h>

int main(){
    int flag, num1, num2, result;
    printf("1 -> Sum \n2 -> Subtraction \n3 -> Multiplication \n4 -> Division\n");
    printf("What operation do you want to perform? ");
    scanf("%d", &flag);
    
    printf("Enter the frist number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (flag == 1){
        result = num1 + num2;
        printf("%d + %d = %d", num1, num2, result);
    }
    if (flag == 2) {
        result = num1 - num2;
        printf("%d - %d = %d", num1, num2, result);
    }
    if (flag == 3) {
        result = num1 * num2;
        printf("%d * %d = %d", num1, num2, result);
    }
    else if (flag == 3) {
        result = num1 / num2;
        printf("%d / %d = %d", num1, num2, result);
    }
    
    return 0;
}