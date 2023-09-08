#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    int sayi1;
    int sayi2;
    float sayi3;
    float sayi4;
    
    scanf("%d", &sayi1);
    scanf("%d", &sayi2);
    scanf("%f", &sayi3);
    scanf("%f", &sayi4);
    
    printf("%d  %d\n", sayi1 + sayi2, sayi1 - sayi2);
    printf("%.1f  %.1f\n", sayi3 + sayi4, sayi3 - sayi4);
    
    return 0;
}

