#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>

int insertSorted(char arr[], int n, char key, int capacity){
    if (n>=capacity){
        return n;
    }
    arr[n] = key;
    return (n+1);
}

int main(){
    char arr[20] = {'c', 'x', 'b', 'd', 'p', 'q'};
    int capacity = sizeof(arr); //20
    int n = 6; // incial elements in array
    int i; // counter
    char key; // what add

    printf("Add: ");
    scanf("%s", &key);

    printf("\n before insertion: ");
    for (i=0; i < n; i++){
        printf("%c ", arr[i]);
    }
    n = insertSorted(arr, n, key, capacity); // return = n+1
    printf("\n after insertion: ");
    for (i=0; i < n; i++){
        printf("%c ", arr[i]);
    }
    return 0;
}