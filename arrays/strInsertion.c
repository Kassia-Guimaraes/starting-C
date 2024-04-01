#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX_LENGTH 7
#define NUM_STRINGS 10

int main(){
    char arr[NUM_STRINGS][MAX_LENGTH] = {{"Lavar pratos"}, {"Estudar"}, {"Tomar banho"}};
    int capacity = sizeof(arr);
    int n = 3;
    char add[] = "Ler";

    for (int i = 0; i < NUM_STRINGS; ++i) {
        printf("%s, ", arr[i]);
    }

  exit(EXIT_SUCCESS);
}