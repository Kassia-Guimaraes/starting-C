#include <stdio.h>
#include <math.h>

int insertSorted(int arr[], int n, int key, int capacity){
    if (n>=capacity){
        return n;
    }
    arr[n] = key;
    return (n+1);
}

int main(){
    int arr[20] = {1,2,3,4,5,6};
    int capacity = sizeof(arr);
    int n = 6; 
    int i;
    int key;

    printf("Add: ");
    scanf("%d", &key);

    printf("\n before insertion: ");
    for (i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
    n = insertSorted(arr, n, key, capacity);
    printf("\n after insertion: ");
    for (i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}