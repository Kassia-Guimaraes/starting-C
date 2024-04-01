#include <stdio.h>
#include <math.h>

int max(int a, int b)
{
    if (a<b){
        return (b);
    }
    else{
        return (a);
    }
}

int main()
{
    int m, n, res1, res2;
    m = 6;
    n = 10;
    res1 = max(m, n);
    printf("1 resultado %d\n", res1);
    res2 = max(12, 255);
    printf("2 resultado %d\n", res2);
}