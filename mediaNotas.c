#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    float notas[4], media = 0;
    int capacity = 4;
    int num = 0, i;

    for (i=num; i<capacity; i++){
        printf("Qual a sua %dº nota?\n", (i+1));
        scanf("%f", &notas[i]);
        num = num+1;
    }

    printf("Suas notas nesse semestre foram: ");
    for (i=0;i<capacity; i++){
        printf("%.2f ", notas[i]);
    }

    for (i=0;i<capacity; i++){
        media = media + (notas[i]/4);
    }
    printf("\nSua media deste semestre foi de: %.2f", media);

    printf("\nSuas notas ao contrário são: ");

    for (i=(capacity-1); i=0; i--){
        printf("%.2f", notas[i]);
    }

    return 0; 
}