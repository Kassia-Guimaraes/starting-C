#include <stdio.h>
#include <math.h>

int startCelsius(double value){
    int flagR;
    double result;
    printf("1 -> Fahrenheit \n2 -> Kelvin \n");
    printf("What temperature do you want to convert? ");
    scanf("%d", &flagR);

    if (flagR == 1){
        result = (1.80*value) + 32;
        printf("%.3lf Celsius is %.3lf Fahrenheit", value, result);
    } else if (flagR == 2) {
        result = value + 273.15;
        printf("%.3lf Celsius is %.3lf Kelvin", value, result);
    }
    return 0;
}

int startFahrenheit(double value){
    int flagR;
    double result;
    printf("1 -> Celsius \n2 -> Kelvin \n");
    printf("What temperature do you want to convert? ");
    scanf("%d", &flagR);

    if (flagR == 1){
        result = (value - 32)/1.80;
        printf("%.3lf Fahrenheit is %.3lf Celsius", value, result);
    } else if (flagR == 2) {
        result = (0.555*(value - 32)) + 273;
        printf("%.3lf Fahrenheit is %.3lf Kelvin", value, result);
        
    }
    return 0;
}

int startKelvin(double value){
    int flagR;
    double result;
    printf("1 -> Celsius \n2 -> Fahrenheit \n");
    printf("What temperature do you want to convert? ");
    scanf("%d", &flagR);

    if (flagR == 1){
        result = value - 273.15;
        printf("%.3lf Kelvin is %.3lf Celsius", value, result);
    } else if (flagR == 2) {
        result = (1.80*(value - 273)) + 32;
        printf("%.3lf Kelvin is %.3lf Fahrenheit", value, result);
    }
    return 0;
}

int main(){
    double value;
    int flag;
    printf("1 -> Celsius \n2 -> Fahrenheit \n3 -> Kelvin \n");
    printf("What is the starting temperature unit? ");
    scanf("%d", &flag);

    printf("What is the temperature? ");
    scanf("%lf", &value);

    if (flag == 1){
        startCelsius(value);
    } else if (flag == 2){
        startFahrenheit(value);
    } else if (flag ==3){
        startKelvin(value);
    }

    return 0;
}